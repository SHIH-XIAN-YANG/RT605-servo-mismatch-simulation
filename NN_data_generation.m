%%
clc; clear;
close all;

%% read file or read path of sine
plot_mode = 'XY';
filedir = strcat('.\PATH\',plot_mode,'_circle_path.txt');
data = readtable(filedir);
% data = readtable('.\PATH\line_xy.txt');
% data = csvread('.\PATH\line_xy.txt');
%data = csvread('.\PATH\YZ_circle.txt');
% data = csvread('.\PATH\sine_f6_123_joints.txt');
% data  = csvread(".\PATH\circle_path.txt"); % XY- circle
% data = csvread(".\PATH\YZ_circle_path.txt");  
%data = csvread(".\PATH\YZ_circle_path.txt");  
% data = csvread(filedir);  

%data 15 parameters
%X, Y, Z, rx, ry, rz, q1, q2, q3, q4, q5, q6, (兩個冗餘項)

set_link_init_mode = true;
set_gravity_torque_mode = true;
set_PID_mode = false;

X_c = data.Var1/1000000;
Y_c = data.Var2/1000000;
Z_c = data.Var3/1000000;
Psi_c = data.Var4/1000;
Phi_c = data.Var5/1000;
theta_c = data.Var6/1000;

%fix the input data psi, phi, theta
for i=1:length(Psi_c)
    if(abs(Psi_c(i) +180)<5)
        Psi_c(i) =Psi_c(i) + 360;
    end
    if(abs(Phi_c(i) +180)<5)
        Phi_c(i) = Phi_c(i) + 360;
    end
    if(abs(theta_c(i) +180)<5)
        theta_c(i)= theta_c(i) + 360;
    end
end

% joint angle from data (degree)
joint.q1 = data.Var7/1000; 
joint.q2 = data.Var8/1000;
joint.q3 = data.Var9/1000;
joint.q4 = data.Var10/1000;
joint.q5 = data.Var11/1000;
joint.q6 = data.Var12/1000;


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
Psi_c = timetable(seconds(time), Psi_c);
Phi_c = timetable(seconds(time), Phi_c);
theta_c = timetable(seconds(time), theta_c);

% plot the path
% plotPath(data)

%%load motor paramters
load("Parameters.mat")
load('StaticPrt11.mat');

%% Parameter setting 
if isa(X_c,'double')
    X_c = timetable(seconds(time), X_c);
    Y_c = timetable(seconds(time), Y_c);
    Z_c = timetable(seconds(time), Z_c);
    Psi_c = timetable(seconds(time), Psi_c);
    Phi_c = timetable(seconds(time), Phi_c);
    theta_c = timetable(seconds(time), theta_c);
end


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

%% Simulation + generating data
gain_LB = 1;
gain_UB = 80;  
num_data =5000; %generate * data and label

% Create data structure to store the result 
data = struct();
data.num = num_data;
data.time = time;
data.BW = zeros(num_data,6);
contouring_err = zeros(length(time),1);
tracking_err = zeros(length(time), 1);
data.C_err = zeros(num_data, length(time));
data.T_err = zeros(num_data, length(time));
data.label = zeros(num_data, 6);
data.T_err_x = zeros(num_data, length(time));
data.T_err_y = zeros(num_data, length(time));
data.T_err_z = zeros(num_data, length(time));
data.T_err_phi = zeros(num_data, length(time));
data.T_err_psi = zeros(num_data, length(time));
data.T_err_theta = zeros(num_data, length(time));


% We only consider first three link of mismatch
Link_Gain = gain_LB + (gain_UB-gain_LB)*rand(num_data, 6);
data.Link_Gain = Link_Gain;

% Comment part is only consider three links of mismatch cases
% link1_gain = 80.2055451888304;
% link2_gain = 69.3379543977804;
% link3_gain = 86.7193824271727;
% link4_gain = 73.0021625203534;
% link5_gain = 93.2213006687449;
% link6_gain = 92.74685480639;
% for i=1:num_data
%     data.Link_Gain(i,:) = [link1_gain,Link235_Gain(i,1),Link235_Gain(i,2),...
%                                     link4_gain,Link235_Gain(i,3), link6_gain];
% end

tic
for round = 1:num_data
    display(strcat('round- ',num2str(round)));
    
    for i=1:6
         sim_dir = strcat('HIWIN_arm/link',num2str(i),'/Kp');
         set_param(sim_dir, 'P',num2str(data.Link_Gain(round,i)));
    end
    
    data.BW(round, :) = Freq_response(0);
    
    sim('HIWIN_arm.slx', 'StartTime', '0', 'StopTime', ...
        num2str((length(time)-1)*dt),'FixedStep',num2str(dt));
    X = ans.X.Data;
    Y = ans.Y.Data;
    Z = ans.Z.Data; 
    Phi = ans.Phi.Data;
    Psi = ans.Psi.Data;
    theta = ans.theta.Data;
    
    if isa(X_c,'timetable') || is(Phi_c,'timetable')
        X_c = X_c.X_c;
        Y_c = Y_c.Y_c;
        Z_c = Z_c.Z_c;
        Phi_c = Phi_c.Phi_c;
        Psi_c = Psi_c.Psi_c;
        theta_c = theta_c.theta_c;
    end
    
    fig_show = false;

    [tracking_err, contouring_err,t_err_x,t_err_y,t_err_z, t_error_phi, t_error_psi, t_error_theta] =...
        compute_contour_err(time ,X,Y,Z,Psi,Phi,theta, X_c, Y_c, Z_c,Psi_c,Phi_c,theta_c, plot_mode, fig_show);
    data.T_err(round,:) = tracking_err';
    data.C_err(round,:) = contouring_err';
    data.T_err_x(round, :) = t_err_x';
    data.T_err_y(round, :) = t_err_y';
    data.T_err_z(round, :) = t_err_z';
    data.T_err_phi(round, :) = t_error_phi';
    data.T_err_psi(round, :) = t_error_psi';
    data.T_err_theta(round, :) = t_error_theta';

    %disp('Bandwidth of each joints(Hz):');
    %disp(data.BW(round,:));
   
    [bw, ind] = min(data.BW(round,:));
    data.label(round,ind) = 1;
    if isa(X_c,'double')
        X_c = timetable(seconds(time), X_c);
        Y_c = timetable(seconds(time), Y_c);
        Z_c = timetable(seconds(time), Z_c);
        Psi_c = timetable(seconds(time), Psi_c);
        Phi_c = timetable(seconds(time), Phi_c);
        theta_c = timetable(seconds(time), theta_c);
    end

end
toc
time_stamp = datetime;
time_stamp.Format = 'MMM_dd_uuuu_HH_mm_ss';
data_save_dir = 'C:/Users/Samuel/Desktop/VGG16/NN_data/';
% writematrix(data.T_err, strcat( data_save_dir, 'tracking_err_links.txt'));
% writematrix(data.label, strcat( data_save_dir, 'labels_links.txt'));
% writematrix(data.T_err_x, strcat( data_save_dir, 'tracking_err_X.txt'));
% writematrix(data.T_err_y, strcat( data_save_dir, 'tracking_err_Ys.txt'));
% writematrix(data.T_err_z, strcat( data_save_dir, 'tracking_err_Z.txt'));
% writematrix(data.BW, strcat( data_save_dir, 'BandWidth.txt'));
% writematrix(data.C_err, strcat( data_save_dir, 'contour_error.txt'));
% writematrix(data.T_err_phi, strcat( data_save_dir, 'tracking_err_Phi.txt'));
% writematrix(data.T_err_psi, strcat( data_save_dir, 'tracking_err_Psi.txt'));
% writematrix(data.T_err_theta, strcat( data_save_dir, 'tracking_err_theta.txt'));

save(strcat('./Data/line_data_',string(time_stamp) ,'.mat'),'data');

%% load data
%data_dir = "data";
%load(strcat("./Data/data_combined",'.mat'));
%% randomly print contouring/*tracking error plot
close all;



%data = data_combine;
file_dir = "./Data/Image_data/";
save_file_dir = './Image/';
%save_file_dir = 'C:/Users/Samuel/Desktop/VGG16/CNN_data/raw_data/';
%i = randi([1 length(data.C_err(:,1))]);
data_length = data.num;
output_size = [224 224];
resolution = 900;
dt = 0.0005;
time =  dt*(0:length(data.C_err(1,:))-1)';
phi = time(1:length(time));
phi = phi./phi(length(phi))*2*pi;

% generate label
fileID = fopen(strcat(save_file_dir,"label.txt"),'wt');
for i=1:data.num
    [value, idx] = max(data.label(i,:));
    %label(i) = num2str(idx);
    fprintf(fileID,'%s',num2str(idx));
    fprintf(fileID,'\n');
end
fclose(fileID);

% generate image 
for i=1:data_length

    fprintf('iteration: %d / %d\n',i,data.num);
    %disp('Bandwidth = ');
    %disp(data.BW(i,:));
    
    %Tracking error plot
    Tracking_err = figure; set(Tracking_err,'Visible','off');
    set(Tracking_err,'paperunits','inch','paperposition',[0 0 output_size/resolution]);
    plot(time, data.T_err(i,:),'LineWidth',0.1);
    grid on;
    %title("tracking error");
    %xlabel('time(s)');
    %ylabel('tracking error');
    %saveas(Tracking_err, strcat(file_dir,'Tracking_err/',num2str(i)),'png');
    ax = gca;
    ax.FontSize = 1;
    ax.LineWidth = 0.1;
    print(strcat(save_file_dir, 'Tracking_err/',num2str(i),'.png'),...
        '-dpng',['-r' num2str(resolution)]);
    close hidden;
    
    % Contouring error plot
    Contour_err = figure; set(Contour_err,'Visible','off');
    set(Contour_err,'paperunits','inch','paperposition',[0 0 output_size/resolution]);
    plot(time, data.C_err(i,:),'LineWidth',0.1);
    grid on;
    %title('contouring error');
    %xlabel('time(s)');
    %ylabel("contouring error");
    %saveas(Contour_err,strcat(file_dir, 'Contour_err/',num2str(i)),'png');
    ax = gca;
    ax.FontSize = 1;
    ax.LineWidth = 0.1;
    print(strcat(save_file_dir, 'Contour_err/',num2str(i),'.png'),'-dpng',['-r' num2str(resolution)]);
    close hidden;

    %Contouring error polar plot
    max_R_c = 0.15;
    min_R_c = -0.01;    
    R = data.C_err(i,:); % error-->Radius of polar
    Contour_err_pol = figure; set(Contour_err_pol,'Visible','off');
     set(Contour_err_pol,'paperunits','inch','paperposition',[0 0 output_size/resolution]);
    polarplot(phi, R,'LineWidth',0.1);
    [val, idx] = max(data.label(i,:));
    title(strcat('Joint',num2str(idx), 'mismatch'));
    rlim([min_R_c max_R_c]);

    ax = gca;
    ax.FontSize = 1;
    ax.LineWidth = 0.1;
    print(strcat(save_file_dir, 'Contour_err_polar/',num2str(i),'.png'),...
        '-dpng',['-r' num2str(resolution)]);
    close hidden;
    
    % Tracking error polar plot
    Tracking_err_pol = figure; set(Tracking_err_pol,'Visible','off');
    set(Tracking_err_pol,'paperunits','inch','paperposition',[0 0 output_size/resolution]);
    R_t = data.T_err(i,:);
    polarplot(phi, R_t,'LineWidth',0.1);

    title(strcat('Joint',num2str(idx) , 'mismatch'));
   % title('tracking error');
    max_R_t = 0.15;
    min_R_t = -0.01;
    rlim([min_R_t max_R_t]);

    ax = gca;
    ax.FontSize = 1;
    ax.LineWidth = 0.1;
    print(strcat(save_file_dir, 'Tracking_err_polar/',num2str(i),'.png'),...
        '-dpng',['-r' num2str(resolution)]);
    close hidden;
end