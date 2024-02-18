file_dir = "./Data/Image_data/";
label = zeros(data.num,1);

fileID = fopen("./Data/Image_data/label.txt",'wt');
for i=1:data.num
    [value, idx] = max(data.label(i,:));
    label(i) = num2str(idx);
    fprintf(fileID,'%s',num2str(idx));
    fprintf(fileID,'\n');
end

fclose(fileID);

%%
data_save_dir = 'C:/Users/Samuel/Desktop/VGG16/NN_data/';
%load('./Data/data_combined.mat');
BW = data.BW;
C_err = data.C_err;
T_err = data.T_err;
labels = data.label;
link_gain = data.Link_Gain;
T_err_x = data.T_err_x;
T_err_y = data.T_err_y;
T_err_z = data.T_err_z;
%%
T_err = data.T_err;
T_err_x = data.T_err_x;
T_err_y = data.T_err_y;
T_err_z = data.T_err_z;
labels = data.label;
writematrix(T_err, strcat( data_save_dir, 'tracking_err_3links.txt'));
writematrix(labels, strcat( data_save_dir, 'labels_3links.txt'));
writematrix(T_err_x, strcat( data_save_dir, 'tracking_err_X_3links.txt'));
writematrix(T_err_y, strcat( data_save_dir, 'tracking_err_Y_3links.txt'));
writematrix(T_err_z, strcat( data_save_dir, 'tracking_err_Z_3links.txt'));
%%
writematrix(BW, strcat( data_save_dir, 'bandwidth_3links.txt'));
writematrix(C_err, strcat( data_save_dir, 'contouring_err_3links.txt'));
writematrix(T_err, strcat( data_save_dir, 'tracking_err_3links.txt'));
writematrix(link_gain, strcat( data_save_dir, 'link_gain_3links.txt'));
writematrix(labels, strcat( data_save_dir, 'labels_3links.txt'));
writematrix(T_err_x, strcat( data_save_dir, 'tracking_err_X_3links.txt'));
writematrix(T_err_y, strcat( data_save_dir, 'tracking_err_Y_3links.txt'));
writematrix(T_err_z, strcat( data_save_dir, 'tracking_err_Z_3links.txt'));
