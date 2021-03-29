clc
clear all

%% Input data
G = 6.67408e-11;        % gravitational constant

% Earth data
m_earth = 5.972e+24;            % [kg] mass  of earth
T_earth = 23*3600 + 56*60 + 4;  % Earth rotation period (sidereal day)
omega_e = 2*pi/T_earth;         % Earth rotation speed [rad/s]
R_e = 6371;                     % Earth radius [km]
mu_e = 398600;                  % Earth planetary constant [km^3/s^2]

% Spacecraft data
I = [0.037 0.051,0.021];

%% if I_z > I_y> I_x the omegas should be stable
I_x = I(1);
I_y = I(2);
I_z = I(3);

Kx = (I_z - I_y)/I_x;
Ky = (I_z - I_x)/I_y;
Kz = (I_y - I_x)/I_z;

%% Orbital parameters
rp = 400 + R_e;       % [km]
ra = 420 + R_e;       % [km]
a = (rp + ra)/2;      % [km] semimajor axis
e = (ra - rp)/(rp + ra);    % eccentricity
i = 51.6;     % [ deg ] orbit inclination 
RAAN = 0;   % [rad] Right Ascension of Ascending Node
omega = 0;  % [rad] argument of periapsis
n = sqrt(mu_e/a^3);     % Mean motion of S/C

%% Sensor parameters
alfa_sun = 1;
alfa_earth = 1/6;
alfa_mag = 1/30;

alfa_tot = 2*alfa_sun + alfa_earth + alfa_mag;

alfa_sun = alfa_sun/alfa_tot;
alfa_earth = alfa_earth/alfa_tot;
alfa_mag = alfa_mag/alfa_tot;

%% SRP parameters

F_e = 1358;     % [W/m^2] Solar radiation intensity per unit area

%% Magnetic approximation [IGRF 2000]

% Order m=1 of the approximation: g_1, h_1

% g = [- 29615 -1728 ]*10^-9;     % [T]
% h = 5186*10^-9;               % [T]

% Magnetic field intensity
% 
% H0 = sqrt(g(1)^2 + g(2)^2 + h(1)^2);

% Local spacecraft magnetic dipole

m = [0.01 0.05 0.01];         % Magnetic dipole induced by electrical
                                % currents [A*m^2]
                                
% read the g and h Schmidt quasi-normalized coefficients
[gn, gm, gvali] = textread('igrfSg.txt','%f %f %f');
[hn, hm, hvali] = textread('igrfSh.txt','%f %f %f');

%% Control design
% Linearized dynamics

A = [0 0 0 1 0 0;
    0 0 0 0 1 0;
    0 0 0 0 0 1;
    -Kx*n^2 0 0 0 (1-Kx)*n 0;
    0 -4*Ky*n^2 0 (Ky-1)*n 0 0
    0 0 -3*n^2*Kz 0 0 0];

 
B = [zeros(3);
     1/I_x 0 0;
     0 1/I_y 0;
     0 0 1/I_z];
 
% Output matrix
C = eye(6);

rank(ctrb(A,B))
rank(obsv(A,C))

Q = [eye(3).*1e-8 zeros(3);
    zeros(3) eye(3)*1e-8];
R = 1e-6;


GK = lqr(A,B,Q,R);

%% Control plots
% close all
sys = ss(A,B,C,0);
% sysaug = ss(A-B*GK,B,C,0);
% 
figure(1)
UNCONTROLLED = pzplot(sys,'r');
set(UNCONTROLLED.allaxes.Children(1).Children, 'MarkerSize', 12)
grid on
gca()
title("Uncontrolled Pole Zero Map",'FontSize',16)
% 
% figure(2)
% CONTROLLED = pzplot(sysaug,'g');
% set(CONTROLLED.allaxes.Children(1).Children, 'MarkerSize', 12)
% grid on

% impulse(sysaug,60)
% figure()
% impulse(sys,60)
% grid on