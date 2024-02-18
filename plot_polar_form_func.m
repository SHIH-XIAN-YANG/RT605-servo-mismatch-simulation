function [] = plot_polar_form_func(X, Y, Z, X_c, Y_c ,Z_c,mode)
    if isa(X_c,'timetable')
        X_c = X_c.X_c;
        Y_c = Y_c.Y_c;
        Z_c = Z_c.Z_c;
    end
    

    if mode == "XY"
        x_offset = 0 ;
        y_offset = 0.443904-0.1;%Y_c(1)-0.1;
        z_offset = 0;
        R = sqrt((X-x_offset).*(X-x_offset) + (Y - y_offset).*(Y - y_offset));
        phi = atan2((Y - y_offset), (X-x_offset));
        R_c = sqrt((Y_c - y_offset).*(Y_c - y_offset) + (X_c - x_offset).*(X_c - x_offset));
        phi_c = atan2((Y_c - y_offset), (X_c - x_offset));
    
    elseif mode == "YZ"
        x_offset =  0.3837863632890000;
        y_offset = 0;%0.035945; %0.2680;%Y_c(1)-0.1;
        z_offset =  0.129282179206000-0.1;% 0.218961; 
        R = sqrt((Y-y_offset).*(Y-y_offset) + (Z - z_offset).*(Z - z_offset));
        phi = atan2((Y - y_offset), (Z-z_offset));
        R_c = sqrt((Y_c - y_offset).*(Y_c - y_offset) + (Z_c - z_offset).*(Z_c - z_offset));
        phi_c = atan2((Y_c - y_offset), (Z_c - z_offset));
    end
    figure;
    
    polarplot(phi, R, phi_c, R_c);
    legend('actual', 'reference');

    

end