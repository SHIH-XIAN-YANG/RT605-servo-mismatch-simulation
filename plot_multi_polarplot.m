function [] = plot_multi_polarplot(time, X,Y,Z,X_c, Y_c, Z_c,BW)
% Plot contoring error and tracking error
% compute_contour_err(time,X,Y,Z,X_c, Y_c, Z_c);
    close all;
    if isa(X_c,'timetable')
        X_c = X_c.X_c;
        Y_c = Y_c.Y_c;
        Z_c = Z_c.Z_c;
    end

        c_error = zeros(length(time), length(X(1,:)));
        %c_error_x = zeros(length(X), 1)*1000;
        %c_error_y = zeros(length(Y), 1)*1000;
        t_error_x = zeros(length(time), length(X(1,:)));
        t_error_y = zeros(length(time), length(X(1,:)));
        t_error_z = zeros(length(time), length(X(1,:)));
    
        t_error = zeros(length(time), length(X(1,:)));
        R = zeros(length(time),length(X(1,:)));
        phi = zeros(length(time),1);
        R_t = zeros(length(time),length(X(1,:)));

        for round = 1:length(X(1,:))
            for i = 1:length(X(:,1))
                    t_error_x(i,round) = (X(i,round) - X_c(i))^2;
                    t_error_y(i,round) = (Y(i,round) - Y_c(i))^2;
                    t_error_z(i,round) = (Z(i,round) - Z_c(i))^2;
                    t_error(i,round) = sqrt(t_error_x(i,round) + t_error_y(i,round) + t_error_z(i,round)) * 1000;
        
                    distance = t_error(i,round);
                    for j = 1:length(X_c)
                        if sqrt((X(i,round) - X_c(j))^2 + (Y(i,round)-Y_c(j))^2 + (Z(i,round) - Z_c(i))^2 ) < distance
                            distance = sqrt((X(i,round) - X_c(j))^2 + (Y(i,round)-Y_c(j))^2 + (Z(i,round) - Z_c(i))^2 );
                        end
                    end
                    c_error(i,round) = distance*1000;
            end
            R(:,round) = c_error(1:length(time),round) ; % error-->Radius of polar
            R_t(:,round) = t_error(1:length(time), round);
        end
    %% plot polar form 
    phi = time(1:length(time));
    phi = phi./phi(length(phi))*2*pi;
    

%     disp(num2str(max(R)));
%     disp(num2str(min(R)));

   max_range = max(max(R))- min(min(R));
%    max(max(R))


    legend_info = {length(BW)};
    for i=1:length(BW)
        legend_info{i} = ['BW=' num2str(BW(i)) 'Hz'];
    end
    %legend(legend_info);

%     figure();
%     plot(time, t_error(:,1));
%     grid on;
%     title("tracking error");
%     xlabel('time(s)');
%     ylabel('tracking error');
%     hold on;
%     for i=2:length(X(1,:))
%         plot(time, t_error(:,i));
%     end
%     legend(legend_info);
%     hold off;
    

    figure();
     subplot(1,2,1);
    plot(time, c_error(:,1));
    grid on;
    
    title('contouring error');
    xlabel('time(s)');
    ylabel("contouring error(mm)");
    hold on;
    for i=2:length(X(1,:))
        plot(time, c_error(:,i));
    end
    legend(legend_info);
    hold off;

%     figure();
subplot(1.,2,2);
    polarplot(phi, R(:,1));
    title('contouring error(mm)');
    rlim([min(R(:,length(R(1,:))))-0.1*max_range, max(R(:,length(R(1,:))))+0.1*max_range]);

%     rlim([min(R(:,length(R(1,:))))-0.01, max(R(:,length(R(1,:))))+0.005]);
    hold on;
    for i=2:length(X(1,:))
        polarplot(phi, R(:,i));
    end
    legend(legend_info);
    hold off;

    if isa(X_c, 'double')
        X_c = timetable(seconds(time), X_c);
        Y_c = timetable(seconds(time), Y_c);
        Z_c = timetable(seconds(time), Z_c);
    end

%     figure();
%     polarplot(phi, R_t(:,1));
%     title('tracking error');
%     rlim([min(R_t(:,length(R_t(1,:))))-0.01 max(R_t(:,length(R_t(1,:))))+0.005]);
%     hold on;
%     for i=2:length(X(1,:))
%         polarplot(phi, R_t(:,i));
%     end
%     legend(legend_info);
%     hold off;

    if isa(X_c, 'double')
        X_c = timetable(seconds(time), X_c);
        Y_c = timetable(seconds(time), Y_c);
        Z_c = timetable(seconds(time), Z_c);
    end

end