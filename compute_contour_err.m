function [t_error, c_error,t_error_x,t_error_y,t_error_z, t_error_phi, t_error_psi, t_error_theta] = ...
        compute_contour_err(time, X,Y ,Z ,Psi,Phi,theta, X_c, Y_c, Z_c, Phi_c, Psi_c, theta_c,plot_mode, fig_show)
    % Plot contoring error and tracking error
    % compute_contour_err(time,X,Y,Z,X_c, Y_c, Z_c);
    size = length(X);
    c_error = zeros(size, 1);
    %c_error_x = zeros(length(X), 1)*1000;
    %c_error_y = zeros(length(Y), 1)*1000;
    t_error_x = zeros(size, 1);
    t_error_y = zeros(size, 1);
    t_error_z = zeros(size, 1);
    t_error_phi = zeros(size, 1);
    t_error_psi = zeros(size, 1);
    t_error_theta = zeros(size, 1);

    t_error = zeros(size,1);

    x_center = (max(X_c) + min(X_c))/2;
    y_center = (max(Y_c) + min(Y_c))/2;
    z_center = (max(Z_c) + min(Z_c))/2;
    
    t_error_x = X - X_c;
    t_error_y = Y - Y_c;
    t_error_z = Z - Z_c;
    t_error_phi = Phi - Phi_c;
    t_error_psi = Psi - Psi_c;
    t_error_theta = theta - theta_c;

    if(plot_mode=="XY")
        R = norm([X_c(1) - x_center, Y_c(1) - y_center]);
    elseif(plot_mode=="YZ")
        R = norm([Y_c(1) - y_center, Z_c(1)-Z_center]);
    else
        %Line mode
    end
    
    for i = 1:size
        if( plot_mode=='XY')
            delta_R = norm([(X(i) - x_center), (Y(i) - y_center)]) - R;
            c_error(i) = norm([delta_R,(Z(i)-z_center)]);
        elseif(plot_mode=='YZ')
            delta_R = norm([(Y(i) - y_center), (Z(i) - z_center)]) - R;
            c_error(i) = norm([delta_R,(X(i)-x_center)]);
        else
            % Line mode
            
            if(X_c(1)==X_c(100)) %x direction line
                    c_error(i) = norm([Y(i)-y_center,Z(i)-z_center]);
            elseif(Y_c(1)==Y_c(100)) %y direction line
                    c_error(i) = norm([X(i)-x_center, Z(i)-z_center]);
            elseif(Z_c(1)==Z_c(100)) %z direction line
                    c_error(i) = norm([X(i)-x_center,Y(i)-y_center]);
            else
                %pass
            end
        end
        t_error(i) = norm([t_error_x, t_error_y, t_error_z]);
    end

%     for i = 1:length(X)
%             t_error_x(i) = (X(i) - X_c(i))^2;
%             t_error_y(i) = (Y(i) - Y_c(i))^2;
%             t_error_z(i) = (Z(i) - Z_c(i))^2;
%             t_error(i) = sqrt(t_error_x(i) + t_error_y(i) + t_error_z(i));
% 
%             distance = t_error(i);
%             for j = 1:length(X_c)
%                 if sqrt((X(i) - X_c(j))^2 + (Y(i)-Y_c(j))^2 + (Z(i) - Z_c(i))^2 ) < distance
%                     distance = sqrt((X(i) - X_c(j))^2 + (Y(i)-Y_c(j))^2 + (Z(i) - Z_c(i))^2 );
%                 end
%             end
%             c_error(i) = distance;
%     end
    
    
    %% plot polar form 
    if (fig_show==true)
        R = c_error(1:length(time))*1000; % error-->Radius of polar
        phi = time(1:length(time));
        phi = phi./phi(length(phi))*2*pi;
    
%         figure;
%         plot(time, t_error);
%         grid on;
%         title("tracking error");
%         xlabel('time(s)');
%         ylabel('tracking error(mm)');
        
        figure;
        plot(time, c_error * 1000);
        xlim([0,3]);
        grid on;
        title('contouring error');
        xlabel('time(s)');
        ylabel("contouring error(mm)");
    
        figure;
        polarplot(phi, R);
        range = max(R) - min(R);
        title('contouring error(mm)');
        rlim([min(R)-0.1*range, max(R)+0.1*range]);
    end

end