function BW = Freq_response(disp)
    %%
    Kt1 = evalin('base','Kt1');
    J1 = evalin('base','J1');
    b1 = evalin('base','b1');
    Kt2 = evalin('base','Kt2');
    J2= evalin('base','J2');
    b2 = evalin('base','b2');
    Kt3 = evalin('base','Kt3');
    J3 = evalin('base','J3');
    b3 = evalin('base','b3');
    Kt4 = evalin('base','Kt4');
    J4 = evalin('base','J4');
    b4 = evalin('base','b4');
    Kt5 = evalin('base','Kt5');
    J5 = evalin('base','J5');
    b5 = evalin('base','b5');
    Kt6 = evalin('base','Kt6');
    J6 = evalin('base','J6');
    b6 = evalin('base','b6');
    %%
    joints.L1.Kv.P = str2double(get_param('HIWIN_arm/link1/Kv','P'));
    joints.L1.Kv.I = str2double(get_param('HIWIN_arm/link1/Kv','I'));
    joints.L1.Kp.P = str2double(get_param('HIWIN_arm/link1/Kp','P'));
    
    joints.L1.Kt = Kt1;
    joints.L1.J = J1;
    joints.L1.b = b1;
    
    joints.L2.Kv.P = str2double(get_param('HIWIN_arm/link2/Kv','P'));
    joints.L2.Kv.I = str2double(get_param('HIWIN_arm/link2/Kv','I'));
    joints.L2.Kp.P = str2double(get_param('HIWIN_arm/link2/Kp','P'));
    joints.L2.Kt = Kt2;
    joints.L2.J = J2;
    joints.L2.b = b2;
    
    joints.L3.Kv.P = str2double(get_param('HIWIN_arm/link3/Kv','P'));
    joints.L3.Kv.I = str2double(get_param('HIWIN_arm/link3/Kv','I'));
    joints.L3.Kp.P = str2double(get_param('HIWIN_arm/link3/Kp','P'));
    joints.L3.Kt = Kt3;
    joints.L3.J = J3;
    joints.L3.b = b3;
    
    joints.L4.Kv.P = str2double(get_param('HIWIN_arm/link4/Kv','P'));
    joints.L4.Kv.I = str2double(get_param('HIWIN_arm/link4/Kv','I'));
    joints.L4.Kp.P = str2double(get_param('HIWIN_arm/link4/Kp','P'));
    joints.L4.Kt = Kt4;
    joints.L4.J = J4;
    joints.L4.b = b4;
    
    joints.L5.Kv.P = str2double(get_param('HIWIN_arm/link5/Kv','P'));
    joints.L5.Kv.I = str2double(get_param('HIWIN_arm/link5/Kv','I'));
    joints.L5.Kp.P = str2double(get_param('HIWIN_arm/link5/Kp','P'));
    joints.L5.Kt = Kt5;
    joints.L5.J = J5;
    joints.L5.b = b5;
    
    joints.L6.Kv.P = str2double(get_param('HIWIN_arm/link6/Kv','P'));
    joints.L6.Kv.I = str2double(get_param('HIWIN_arm/link6/Kv','I'));
    joints.L6.Kp.P = str2double(get_param('HIWIN_arm/link6/Kp','P'));
    joints.L6.Kt = Kt6;
    joints.L6.J = J6;
    joints.L6.b = b6;
    
    s = tf('s');
    
    %%
    Links = fieldnames(joints);
    for i=1:6
        Link = joints.(Links{i});
        % Velocity loop
        Kv_ctr = Link.Kv.P*(1+Link.Kv.I/s);
        motor = 1/(Link.J*s + Link.b);
        sys =  Kv_ctr * Link.Kt * motor;
        
        vel_cl_sys = sys / (1 + sys); 
        
        %vel_cl_sys = sys / ( 1 + sys );
        
        % Position loop
        Kp_ctr = Link.Kp.P;
        sys = Kp_ctr* vel_cl_sys / s;
        cl_sys(i) = sys / ( 1 + sys );
        BW(i) = bandwidth(cl_sys(i)).*0.1592 ;  %0.1592: rad/s to Hz
    end
    
    if disp == true
        figure;
        Freq_bode = bodeplot(cl_sys(1), cl_sys(2),cl_sys(3),cl_sys(4),cl_sys(5),cl_sys(6));
        setoptions(Freq_bode,'FreqUnits','Hz','Xlim',[0.1,100]);
        %set(Freq_bode,[100 100 500 500])
        grid on;

        legend("joint1-"+num2str(BW(1))+"Hz","joint2-"+num2str(BW(2))+"Hz" ...
            ,"joint3-"+num2str(BW(3))+"Hz","joint4-"+num2str(BW(4))+"Hz" ...
            ,"joint5-"+num2str(BW(5))+"Hz","joint6-"+num2str(BW(6))+"Hz",'location','southwest');
    end
end







