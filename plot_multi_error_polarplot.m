%% polar plot REDO version
%previous version of contouring error is not correct
function [] = plot_multi_error_polarplot(time, X,Y,Z,X_c, Y_c, Z_c, BW, mode)

close all;
if isa(X_c,'timetable')
    X_c = X_c.X_c;
    Y_c = Y_c.Y_c;
    Z_c = Z_c.Z_c;
end

phi = time(1:length(time));
phi = phi./phi(length(phi))*2*pi;

R = zeros(length(time),length(X(1,:)));
R_c = zeros(length(time),length(X(1,:)));
rho = zeros(length(time),length(X(1,:)));

% Culculate the center point
X_center = (max(X_c) + min(X_c))/2*1000;
Y_center = (max(Y_c) + min(Y_c))/2*1000;
Z_center = (max(Z_c) + min(Z_c))/2*1000;

figure();
for round = 1:length(X(1,:))
    if mode == "XY"
        for i=1:length(time)
        %     R(i) = sqrt((Y(i)*1000 - Y_center)^2 + (Z(i)*1000 - Z_center)^2);
            R(i,round) = norm([X(i,round)*1000 - X_center, Y(i,round)*1000 - Y_center]);
            R_c(i,round) = norm([X_c(i)*1000 -X_center, Y_c(i)*1000 - Y_center]);
            rho(i,round) = R(i,round) - R_c(i,round);
        end
    elseif mode == "YZ"
        for i=1:length(time)
        %     R(i) = sqrt((Y(i)*1000 - Y_center)^2 + (Z(i)*1000 - Z_center)^2);
            R(i,round) = norm([Z(i,round)*1000 - Z_center, Y(i,round)*1000 - Y_center]);
            R_c(i,round) = norm([Z_c(i)*1000 - Z_center, Y_c(i)*1000 - Y_center]);
            rho(i,round) = R(i,round) - R_c(i,round);
        end
    end
end
legend_info = {length(BW)};
for i=1:length(BW)
    legend_info{i} = ['BW=' num2str(BW(i)) 'Hz'];
end


range = max(rho(:,round)) -min(rho(:,round));
polarplot(phi,rho(:,round));
% polarplot(phi,R_c);
title_string = strcat("Circular ",mode,"-error");
title(title_string);
rlim([min(rho(:,length(X(1,:))))-0.1*range, max(rho(:,length(X(1,:))))+0.1*range]);
hold on;

for round = 2:length(X(1,:))
    polarplot(phi,rho(:,round));
end
legend(legend_info)
hold off;



end
