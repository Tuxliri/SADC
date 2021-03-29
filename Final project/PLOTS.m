%% Plots for report

close all

%% Plotting attitude angles error
alfaz = out.ATTITUDE_ERROR.Data(1,2,:);
alfaz = rad2deg(reshape(alfaz,size(alfaz,3),1));

alfay = out.ATTITUDE_ERROR.Data(3,1,:);
alfay = rad2deg(reshape(alfay,size(alfay,3),1));

alfax = out.ATTITUDE_ERROR.Data(2,3,:);
alfax = rad2deg(reshape(alfax,size(alfax,3),1));

time = out.ATTITUDE_ERROR.time;
figure(1)
plot(time,alfax,time,alfay,time,alfaz,'Linewidth',2);
gca()
title('Attitude Errors','FontSize',16)
ylabel("[deg]",'FontSize',16)
xlabel("time [s]",'FontSize',16)
legend('\alpha_x','\alpha_y','\alpha_z','FontSize',16)
grid on

%% Plotting omega error
figure(3)
OMEGAE = out.OMEGA_ERROR.Data(:,:);
OMEGAE = rad2deg(OMEGAE);
plot(time,OMEGAE(:,1),time,OMEGAE(:,2),time,OMEGAE(:,3),'Linewidth',2)
gca()
title("Angular Velocity Error",'FontSize',16)
ylabel("[deg/s]",'FontSize',16)
xlabel("time [s]",'FontSize',16)
legend('\omega_x','\omega_y','\omega_z','FontSize',16)
grid on

%% Plotting ideal control torque vs real one
figure(3)
uid = out.TC_IDEAL.Data(:,:);
plot(time,uid(:,1),time,uid(:,2),time,uid(:,3),'Linewidth',2)
gca()
title("Ideal Control Torque",'FontSize',16)
ylabel("[Nm]",'FontSize',16)
xlabel("time [s]",'FontSize',16)
grid on

figure(4)
Mc = out.TC_ACTUAL.Data(:,:);
plot(time,Mc(:,1),time,Mc(:,2),time,Mc(:,3),'Linewidth',2)
gca()
title("Real Control Torque",'FontSize',16)
ylabel("[Nm]",'FontSize',16)
xlabel("time [s]",'FontSize',16)
grid on

%% CMG gimbal rates
figure(5)

GIMBALRATE = out.GIMBALRATE.Data(:,:);
GIMBALRATE = rad2deg(GIMBALRATE);
plot(time,GIMBALRATE(:,1),time,GIMBALRATE(:,2),time,GIMBALRATE(:,3),time,GIMBALRATE(:,4),'Linewidth',2)
gca()
title("CMG gimbal rates",'FontSize',16)
ylabel("[deg/s]",'FontSize',16)
xlabel("time [s]",'FontSize',16)
grid on

figure(6)

GIMBALANGLES = out.GIMBALANGLES.Data(:,:);
GIMBALANGLES = rad2deg(GIMBALANGLES);
plot(time,GIMBALANGLES(:,1),time,GIMBALANGLES(:,2),time,GIMBALANGLES(:,3),time,GIMBALANGLES(:,4),'Linewidth',2)
gca()
title("CMG gimbal angles",'FontSize',16)
ylabel("[deg]",'FontSize',16)
xlabel("time [s]",'FontSize',16)
grid on
%% Disturbance torques
figure(7)
TSRP = out.TSRP.Data;
TSRP =reshape(TSRP,size(TSRP,3),3);
max_TSRP = norm(max(TSRP));

GG = out.GG.Data;
% GG =reshape(GG,size(GG,3),3);
max_GG= norm(max(GG));

MAGDIST = out.MAGDIST.Data;
% MAGDIST =reshape(MAGDIST,size(MAGDIST,3),3);
max_MAGDIST = norm(max(MAGDIST));

AERODIST = out.AERODIST.Data;
AERODIST =reshape(AERODIST,size(AERODIST,3),3);
max_AERODIST = norm(max(AERODIST));

YBAR = [max_TSRP max_GG max_MAGDIST max_AERODIST];
X = categorical({'TSRP', 'GG', 'MAG', 'DRAG'});
X = reordercats(X,{'TSRP' ,'GG', 'MAG', 'DRAG'});
bar(X,YBAR)
ylabel('Torque [Nm]')
set(gca,'yscale','log')
grid on