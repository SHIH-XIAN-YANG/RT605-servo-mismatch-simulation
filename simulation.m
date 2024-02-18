%%
clc; clear;
close all;

%% read file or read path of sine
test = "XY";
filedir = strcat('.\PATH\',test,'_circle_path.txt');
% filedir = strcat('.\PATH\line\line_Z_axis.txt');
data = readtable(filedir);
% data = csvread('.\PATH\line_xy.txt');
%data = csvread('.\PATH\YZ_circle.txt');
% data = csvread('.\PATH\sine_f6_123_joints.txt');
% data  = csvread(".\PATH\circle_path.txt"); % XY- circle
% data = csvread(".\PATH\YZ_circle_path.txt");  
%data = csvread(".\PATH\YZ_circle_path.txt");  
% data = csvread(filedir);  
% data = readtable(".\PATH\line\line_yz.txt");

%data 15 parameters
%X, Y, Z, rx, ry, rz, q1, q2, q3, q4, q5, q6, (兩個冗餘項)

set_link_init_mode = true;
set_gravity_torque_mode = false;
set_PID_mode = false;

X_c = data.Var1/1000000;
Y_c = data.Var2/1000000;
Z_c = data.Var3/1000000;
% joint angle from data (degree)
joint.q1 = data.Var7/1000; 
joint.q2 = data.Var8/1000;
joint.q3 = data.Var9/1000;
joint.q4 = data.Var10/1000;
joint.q5 = data.Var11/1000;
joint.q6 = data.Var12/1000;
% Prolong the trajeectory to revent the actual from stop when the command trajectry is finish
add_point = 4000 - length(X_c);
for i=1:add_point
    X_c = [X_c; X_c(length(X_c))];
    Y_c = [Y_c; Y_c(length(Y_c))];
    Z_c = [Z_c; Z_c(length(Z_c))];
    joint.q1 = [joint.q1; joint.q1(length(joint.q1))];
    joint.q2 = [joint.q2; joint.q2(length(joint.q2))];
    joint.q3 = [joint.q3; joint.q3(length(joint.q3))];
    joint.q4 = [joint.q4; joint.q4(length(joint.q4))];
    joint.q5 = [joint.q5; joint.q5(length(joint.q5))];
    joint.q6 = [joint.q6; joint.q6(length(joint.q6))];
end



Radius = (max(X_c) - min(X_c))/2*1000;
x_center = (max(X_c) + min(X_c))/2*1000;
y_center = (max(Y_c) + min(Y_c))/2*1000;
z_center = (max(Z_c) + min(Z_c))/2*1000;


dt = 0.0005;
time = dt * (0:size(X_c)-1)';
q1_c = timetable(seconds(time), joint.q1);
q2_c = timetable(seconds(time), joint.q2);
q3_c = timetable(seconds(time), joint.q3);
q4_c = timetable(seconds(time), joint.q4);
q5_c = timetable(seconds(time), joint.q5);
q6_c = timetable(seconds(time), joint.q6);
X_c = timetable(seconds(time), X_c);
Y_c = timetable(seconds(time), Y_c);
Z_c = timetable(seconds(time), Z_c);

% plot the path
% plotPath(data)

%%load motor paramters
load("Parameters.mat")
load('StaticPrt11.mat');
%% load motor paramters
load("Parameters.mat")
load('StaticPrt11.mat');
%computeRT605_GTorque("StaticPrt11.mat", )
%% Parameter setting 
if isa(X_c,'double')
    X_c = timetable(seconds(time), X_c);
    Y_c = timetable(seconds(time), Y_c);
    Z_c = timetable(seconds(time), Z_c);
end

L1_Gain = [80.2055451888304, 40, 20, 10.2,5];
L2_Gain = [69.3379543977804,  30, 8.97121442942668, 4.9,2];
L3_Gain = [86.7193824271727, 40, 20, 9.28453475489333,4.9];
L4_Gain = [73.0021625203534, 60, 40, 20, 9.3318008128406];
L5_Gain = [93.2213006687449, 70, 50, 30, 10.3153449630633];
L6_Gain = [92.74685480639, 70, 50, 30, 9.65445137584871];
Gain = [L1_Gain; L2_Gain; L3_Gain; L4_Gain; L5_Gain; L6_Gain];

if set_link_init_mode == true
    set_param('HIWIN_arm/link1/Gain','Gain','1');
    set_param('HIWIN_arm/link2/Gain','Gain','1');
    set_param('HIWIN_arm/link3/Gain','Gain','1');
    set_param('HIWIN_arm/link4/Gain','Gain','1');
    set_param('HIWIN_arm/link5/Gain','Gain','1');
    set_param('HIWIN_arm/link6/Gain','Gain','1');
else
    set_param('HIWIN_arm/link1/Gain','Gain','0');
    set_param('HIWIN_arm/link2/Gain','Gain','0');
    set_param('HIWIN_arm/link3/Gain','Gain','0');
    set_param('HIWIN_arm/link4/Gain','Gain','0');
    set_param('HIWIN_arm/link5/Gain','Gain','0');
    set_param('HIWIN_arm/link6/Gain','Gain','0');
end
if set_PID_mode == true
% set PID parameters
     set_param('HIWIN_arm/link1/Kp', 'P','80.2055451888304');
     set_param('HIWIN_arm/link2/Kp', 'P','69.3379543977804');
     set_param('HIWIN_arm/link3/Kp', 'P','86.7193824271727');
     set_param('HIWIN_arm/link4/Kp', 'P','73.0021625203534');
     set_param('HIWIN_arm/link5/Kp', 'P','93.2213006687449');
     set_param('HIWIN_arm/link6/Kp', 'P','92.74685480639');
end

if set_gravity_torque_mode == true
    set_param('HIWIN_arm/Constant','Value','1');
else
    set_param('HIWIN_arm/Constant','Value','0');
end
%% Simulation

mismatch_gain = [8.02055451888304,...
                              6.93379543977804,...
                              8.67193824271727,...
                              7.30021625203534,...
                              9.32213006687449, ...
                              9.274685480639];


display(strcat(test,' Circle test'));
sim('HIWIN_arm.slx', 'StartTime', '0', 'StopTime', num2str((length(time)-1)*dt),'FixedStep',num2str(dt));
X = ans.X.Data;
Y = ans.Y.Data;
Z = ans.Z.Data; 
q1 = ans.q1.Data;
q2 = ans.q2.Data;
q3 = ans.q3.Data;
q4 = ans.q4.Data;
q5 = ans.q5.Data;
q6 = ans.q6.Data;
%  
    


%  Link_mismatch =6; % mismatch link ex: 1--> link1 mismatch
%  X = zeros(length(X_c.X_c),length(L1_Gain));
%  Y = zeros(length(X_c.X_c),length(L1_Gain));
%  Z = zeros(length(X_c.X_c),length(L1_Gain));
%  q1 = zeros(length(X_c.X_c),length(L1_Gain));
%  q2 = zeros(length(X_c.X_c),length(L1_Gain));
%  q3 = zeros(length(X_c.X_c),length(L1_Gain));
%  q4 = zeros(length(X_c.X_c),length(L1_Gain));
%  q5 = zeros(length(X_c.X_c),length(L1_Gain));
%  q6 = zeros(length(X_c.X_c),length(L1_Gain));
%  BW = zeros(length(L1_Gain),6);
%  for links_mm=1:length(Link_mismatch)
%         display(strcat('Mismatch joint #',num2str(Link_mismatch(links_mm))));
%  end
%  
%  
%  for i=1:length(L1_Gain)
%      for links_mm=1:length(Link_mismatch)
%             link = strcat('HIWIN_arm/link', num2str(Link_mismatch(links_mm)), '/Kp');
%             set_param(link, 'P',num2str(Gain(Link_mismatch(links_mm), i)));
%             %display(strcat('Mismatch joint #',num2str(Link_mismatch(links_mm))));
%      end
%      sim('HIWIN_arm.slx', 'StartTime', '0', 'StopTime', num2str((length(time)-1)*dt),'FixedStep',num2str(dt));
%  
%      X(:,i) = ans.X.Data;
%      Y(:,i) = ans.Y.Data;
%      Z(:,i) = ans.Z.Data; 
%      q1(:,i) = ans.q1.Data;
%      q2(:,i) = ans.q2.Data;
%      q3(:,i) = ans.q3.Data;
%      q4(:,i) = ans.q4.Data;
%      q5(:,i) = ans.q5.Data;
%      q6(:,i) = ans.q6.Data;
% 
%      BW(i,:) = Freq_response(0);
%  
%      if isa(q1_c,'double') || isa(X_c, 'double')
%          q1_c = timetable(seconds(time), joint.q1);
%          q2_c = timetable(seconds(time), joint.q2);
%          q3_c = timetable(seconds(time), joint.q3);
%          q4_c = timetable(seconds(time), joint.q4);
%          q5_c = timetable(seconds(time), joint.q5);
%          q6_c = timetable(seconds(time), joint.q6);
%          X_c = timetable(seconds(time), X_c);
%          Y_c = timetable(seconds(time), Y_c);
%          Z_c = timetable(seconds(time), Z_c);
%      end
%         
%      display(strcat('Round  ', num2str(i), ' finished'));
%  end
%  set_param('HIWIN_arm/link1/Kp', 'P','80.2055451888304');
%  set_param('HIWIN_arm/link2/Kp', 'P','69.3379543977804');
%  set_param('HIWIN_arm/link3/Kp', 'P','86.7193824271727');
%  set_param('HIWIN_arm/link4/Kp', 'P','73.0021625203534');
%  set_param('HIWIN_arm/link5/Kp', 'P','93.2213006687449');
%  set_param('HIWIN_arm/link6/Kp', 'P','92.74685480639');
% % plot_multi_polarplot(time,X,Y,Z,X_c, Y_c, Z_c,BW(:,Link_mismatch));
% % Plot multi cartesian
% % plot_multi_cartesian(time,X, Y, Z, X_c, Y_c, Z_c);
% % plot_multi_polarplot(time,X,Y,Z,X_c, Y_c, Z_c,BW(:,Link_mismatch));
% plot_multi_error_polarplot(time,X,Y,Z,X_c, Y_c, Z_c,BW(:,Link_mismatch), test);

%% PLOT RESULT
 close all;
    if isa(X_c,'timetable')
        X_c = X_c.X_c;
        Y_c = Y_c.Y_c;
        Z_c = Z_c.Z_c;
    end
    
    if isa(q1_c,'timetable')
        q1_c = q1_c.Var1;
        q2_c = q2_c.Var1;
        q3_c = q3_c.Var1;
        q4_c = q4_c.Var1;
        q5_c = q5_c.Var1;
        q6_c = q6_c.Var1;
    end

%plot XYZ figure of actual and command trajectory
plot_trajectory_func(time, ans, X_c, Y_c, Z_c, q1_c, q2_c, q3_c, q4_c, q5_c, q6_c);

% Polar plot
%plot_polar_form_func(X, Y,Z, X_c, Y_c, Z_c, "YZ");

% Plot gravity torque 
plot_gravity_torq(ans.g1,ans.g2,ans.g3,ans.g4,ans.g5,ans.g6, ...
                            ans.tor_1,ans.tor_2,ans.tor_3,ans.tor_4,ans.tor_5,ans.tor_6);


% Plot and return the BW of ach joints
BW = Freq_response(1);

plot_mode = true;
% compute contouring/tracking error

[tracking_err, contouring_err, tracking_err_x, tracking_err_y, tracking_err_z]...
    = compute_contour_err(time ,X,Y,Z, X_c, Y_c, Z_c,plot_mode);

% Frequency domain analysys on tracking error/ contouring error
% tracking_err_Freq = fft(tracking_err);
% tracking_err_Freq = abs(tracking_err_Freq/length(time));
set_param('HIWIN_arm/link1/Kp', 'P','80.2055451888304');
set_param('HIWIN_arm/link2/Kp', 'P','69.3379543977804');
set_param('HIWIN_arm/link3/Kp', 'P','86.7193824271727');
set_param('HIWIN_arm/link4/Kp', 'P','73.0021625203534');
set_param('HIWIN_arm/link5/Kp', 'P','93.2213006687449');
set_param('HIWIN_arm/link6/Kp', 'P','92.74685480639');

if isa(q1_c,'double') || isa(X_c, 'double')
    q1_c = timetable(seconds(time), joint.q1);
    q2_c = timetable(seconds(time), joint.q2);
    q3_c = timetable(seconds(time), joint.q3);
    q4_c = timetable(seconds(time), joint.q4);
    q5_c = timetable(seconds(time), joint.q5);
    q6_c = timetable(seconds(time), joint.q6);
    X_c = timetable(seconds(time), X_c);
    Y_c = timetable(seconds(time), Y_c);
    Z_c = timetable(seconds(time), Z_c);
end