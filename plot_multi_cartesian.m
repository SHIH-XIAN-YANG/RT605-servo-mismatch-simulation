function [] = plot_multi_cartesian(time,X,Y,Z, X_c, Y_c, Z_c) 
close all;
    if isa(X_c,'timetable')
        X_c = X_c.X_c;
        Y_c = Y_c.Y_c;
        Z_c = Z_c.Z_c;
    end
    
    figure;
    plot3(X(:,1), Y(:,1), Z(:,1), X_c, Y_c, Z_c,'LineWidth',1.5);
    text(X(1), Y(1), Z(1),'*start ', 'Color','r','FontSize',18)
    grid on;
    axis equal
    %xlim([-0.15, 0.15]);
    %ylim([0.1, 0.4]); 
    %zlim([0.3229, 0.323]);
    title('Cartesian space trajectory');
    xlabel('X(m)');
    ylabel('Y(m)');
    zlabel('Z(m)');
    legend('actual', 'reference');
    
    hold on;
    
    for i=2:length(X(1,:))
        plot3(X(:,i), Y(:,i), Z(:,i));
    end
    hold off;

     % plot X Y Z 
    figure;
    
    subplot(3,1,1);
    plot(time,X(:,1), time, X_c(:,1));
    ylim([-0.4 , -0.35]);
    xlabel('time(s)');
    ylabel('X(m)');
    title('Cartesian space trajectory');
    legend('actual','refernece');
    grid on;
    hold on;
    for i=2:length(Y(1,:))
        plot(time, X(:,i));
    end
    hold off;

    subplot(3,1,2);
    plot(time, Y(:,1), time, Y_c(:,1));
    %ylim([0.2,0.6]);
    xlabel('time(s)');
    ylabel('Y(m)');
    legend('actual','refernece');
    grid on;
    hold on;
    for i=2:length(Y(1,:))
        plot(time, Y(:,i));
    end
    hold off;

    subplot(3,1,3);
    plot(time, Z(:,1), time, Z_c(:,1));
    %ylim([-0.125,0.125]);
    xlabel('time(s)');
    ylabel('Z(m)');
    legend('actual','refernece');
    grid on;
    hold on;
    for i=2:length(Y(1,:))
        plot(time, Z(:,i));
    end
    hold off;
    
    set_param('HIWIN_arm/link1/Kp', 'P','80.2055451888304');
     set_param('HIWIN_arm/link2/Kp', 'P','69.3379543977804');
     set_param('HIWIN_arm/link3/Kp', 'P','86.7193824271727');
     set_param('HIWIN_arm/link4/Kp', 'P','73.0021625203534');
     set_param('HIWIN_arm/link5/Kp', 'P','93.2213006687449');
     set_param('HIWIN_arm/link6/Kp', 'P','92.74685480639');
end
    