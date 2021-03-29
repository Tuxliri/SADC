
% Principal Moments of Inertia

I_x = 0.0504 ;      % [ kg*m^2 ]
I_y = 0.0504 ;      % [ kg*m^2 ]
I_z = 0.0109 ;      % [ kg*m^2 ]


% Initial conditions

omega_0 = [0.45 0.52 0.55] ; % [ rad/s ]

%% plot omega

plot(out.tout, out.omega(:,1), out.tout, out.omega(:,2), out.tout, out.omega(:,3))
grid on
xlabel('t [s]')
ylabel('\omega [rad/s]')
legend('\omega x', '\omega y', '\omega z')