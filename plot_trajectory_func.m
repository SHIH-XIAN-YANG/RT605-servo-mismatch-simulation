function [] = plot_trajectory_func(time, result,X_c, Y_c, Z_c, q1_c,q2_c, q3_c, q4_c, q5_c, q6_c)
    %close all;

        X = result.X.Data*1000;
        Y = result.Y.Data*1000;
        Z = result.Z.Data*1000; 
        q1 = result.q1.Data;
        q2 = result.q2.Data;
        q3 = result.q3.Data;
        q4 = result.q4.Data;
        q5 = result.q5.Data;
        q6 = result.q6.Data;
     
    if isa(X_c,'timetable')
        X_c = X_c.X_c;
        Y_c = Y_c.Y_c;
        Z_c = Z_c.Z_c;
    end
    
    X_c = X_c*1000;
    Y_c = Y_c*1000;
    Z_c = Z_c*1000;

    if isa(q1_c,'timetable')
        q1_c = q1_c.Var1;
        q2_c = q2_c.Var1;
        q3_c = q3_c.Var1;
        q4_c = q4_c.Var1;
        q5_c = q5_c.Var1;
        q6_c = q6_c.Var1;
    end
    
% plot X Y Z 
    max_range = max([max(X)-min(X), max(Y)-min(Y), max(Z)- min(Z)])/2;
    mid_x = (max(X)+min(X))/2;
    mid_y = (max(Y)+min(Y))/2;
    mid_z = (max(Z)+min(Z))/2;
    
    x_center = (max(X_c) + min(X_c))/2 ;
    y_center = (max(Y_c) + min(Y_c)) /2 ;
    z_center = (max(Z_c) + min(Z_c))/2 ;
    radius = (max(Y_c) -min(Y_c)) / 2;

    figure;
    plot3(X, Y, Z, X_c, Y_c, Z_c);
%     plot3(X_c, Y_c, Z_c);
%    str = strcat('r=',num2str(radius));
    text(X(1), Y(1), Z(1),'*start ', 'Color','r','FontSize',18);
%     text(x_center,y_center-2,z_center+2,'o','Color','r','FontSize',10);
%     text(x_center-10,y_center-20,z_center+15,'Center','FontSize',10);
%     text((x_center+max(X_c))/2, y_center+20,z_center-20,str,'Color','k','FontSize',10);
%     line([x_center, max(X_c)],[max(Y_c), y_center],[z_center, z_center],'Color','k');
    %text(X(length(X)), Y(length(Y)), Z(length(Z)),'+stop ', 'Color','b','FontSize',18)
    grid on;
    axis equal
%     xlim([x_center-100, x_center+100]);
    %xlim([-0.15, 0.15]);
    %ylim([0.1, 0.4]);
    %zlim([0.3229, 0.323]);
    title('Cartesian space trajectory')
    xlabel('X(mm)');
    ylabel('Y(mm)');
    zlabel('Z(mm)');
    legend('actual', 'reference');
    
    


    figure;
    
    subplot(3,1,1);
    plot(time,X, time, X_c);
    %ylim([0.35,0.6]);
    ylim([mid_x-1.2*max_range, mid_x+1.2*max_range]);
    xlabel('time(s)');
    ylabel('X(mm)');

    title('Cartesian space trajectory');
    legend('actual','refernece');
    grid on;
    
    subplot(3,1,2);
    plot(time, Y, time, Y_c);
    ylim([mid_y-1.2*max_range, mid_y+1.2*max_range]);
    %ylim([0.2,0.6]);
    xlabel('time(s)');
    ylabel('Y(mm)');
%     legend('actual','refernece');
    grid on;
    
    subplot(3,1,3);
    plot(time, Z, time, Z_c);
    ylim([mid_z-1.2*max_range, mid_z+1.2*max_range]);
    xlabel('time(s)');
    ylabel('Z(mm)');
    legend('actual','refernece');
    grid on;
    

    figure("Name","Y axis");
    plot(time, Z, time,Z_c);
    ylim([-165, -40]);
%     xlim([0, 3])
    xlabel('time(s)');
    ylabel('X(mm)');
    title('Joint 6');
%     legend('actual','refernece');
    grid on;
    
    % plot joint space trajectory
    figure;
    title("Joint angle");
    subplot(3,2,1);

    max_range = max([max(q1)-min(q1), max(q2)-min(q2), max(q3)- min(q3), ...
                                max(q4)- min(q4), max(q5)- min(q5), max(q6)- min(q6)])/2;
    mid_q1 = (max(q1)+min(q1))/2;
    mid_q2 = (max(q2)+min(q2))/2;
    mid_q3 = (max(q3)+min(q3))/2;
    mid_q4 = (max(q4)+min(q4))/2;
    mid_q5 = (max(q5)+min(q5))/2;
    mid_q6 = (max(q6)+min(q6))/2;

    plot(time,q1, time, q1_c);
    ylim([mid_q1-1.2*max_range,mid_q1+1.2*max_range]);
%     xlim([0, 3])
    xlabel('time(sec)');
    ylabel('$\theta$1 (degree)','Interpreter','Latex');
    legend('actual', 'reference');
    grid on;
    
    subplot(3,2,2);
    plot(time,q2, time, q2_c);
%     xlim([0, 3])
    ylim([mid_q2-1.2*max_range,mid_q2+1.2*max_range]);
    xlabel('time(sec)');
    ylabel('$\theta$2 (degree)','Interpreter','Latex');

%     legend('actual', 'reference');
    grid on;
    
    subplot(3,2,3);
    plot(time,q3, time, q3_c);
%     xlim([0, 3])
    ylim([mid_q3-1.2*max_range,mid_q3+1.2*max_range]);
    xlabel('time(sec)');
    ylabel('$\theta$3 (degree)','Interpreter','Latex');
%     legend('actual', 'reference');
    grid on;
    
    subplot(3,2,4);
    plot(time,q4, time, q4_c);
%     xlim([0, 3])
    ylim([mid_q4-1.2*max_range,mid_q4+1.2*max_range]);
    xlabel('time(sec)');
    ylabel('$\theta$4 (degree)','Interpreter','Latex');
%     legend('actual', 'reference');
    grid on;
    
    subplot(3,2,5);
    plot(time,q5, time, q5_c);
%     xlim([0, 3])
    ylim([mid_q5-1.2*max_range,mid_q5+1.2*max_range]);
    xlabel('time(sec)');
    ylabel('$\theta$5 (degree)','Interpreter','Latex');
%     legend('actual', 'reference');
    grid on;
    
    subplot(3,2,6);
    plot(time,q6, time, q6_c);
%     xlim([0, 3])
    ylim([mid_q6-1.2*max_range,mid_q6+1.2*max_range]);
    xlabel('time(sec)');
    ylabel('$\theta$6 (degree)','Interpreter','Latex');
%     legend('actual', 'reference');
    grid on;
end
