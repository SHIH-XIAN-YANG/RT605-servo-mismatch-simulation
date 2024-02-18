function [] = plot_gravity_torq(g1,g2,g3,g4,g5,g6,tor_1, tor_2,tor_3,tor_4,tor_5, tor_6)
    %plot gravity torque
    figure();
    
    subplot(3,2,1);
    g1.plot;
    xlabel("time(s)");
    ylabel("torque(N-m)")
    title("Joint 1");
    grid on;
    subplot(3,2,2);
    g2.plot;
    xlabel("time(s)");
    ylabel(" torque(N-m)")
    title("Joint 2");
    grid on;
    subplot(3,2,3);
    g3.plot;
    xlabel("time(s)");
    ylabel("torque(N-m)")
    title("Joint 3");
    grid on;
    subplot(3,2,4);
    g4.plot;
    xlabel("time(s)");
    ylabel("torque(N-m)")
    title("Joint 4");
    grid on;
    subplot(3,2,5);
    g5.plot;
    xlabel("time(s)");
    ylabel("torque(N-m)")
    title("Joint 5");
    grid on;
    subplot(3,2,6);
    g6.plot;
    xlabel("time(s)");
    ylabel("torque(N-m)")
    title("Joint 6");
    sgtitle("Gravity torque(N-m)");
    grid on;
    
    %plot torque
    figure();
    
    subplot(3,2,1);
    tor_1.plot;
    xlabel("time(s)");
    ylabel("torque(N-m) ")
    title("Joint 1");
    grid on;
    subplot(3,2,2);
    tor_2.plot;
    xlabel("time(s)");
    ylabel(" torque(N-m) ")
    title("Joint 2");
    grid on;
    subplot(3,2,3);
    tor_3.plot;
    xlabel("time(s)");
    ylabel("torque(N-m) ")
    title("Joint 3");
    grid on;
    subplot(3,2,4);
    tor_4.plot;
    xlabel("time(s)");
    ylabel("torque(N-m) ")
    title("Joint 4");
    grid on;
    subplot(3,2,5);
    tor_5.plot;
    xlabel("time(s)");
    ylabel("torque(N-m)")
    title("Joint 5");
    grid on;
    subplot(3,2,6);
    tor_6.plot;
    xlabel("time(s)");
    ylabel("torque(N-m)")
    title("Joint 6");
    sgtitle("torque command");
    grid on;
    
%     save("X_g_off.mat","X");
%     save("Y_g_off.mat","Y");
%     save("Z_g_off.mat","Z");
%     
%     save("q1_g_off.mat","q1");
%     save("q2_g_off.mat","q2");
%     save("q3_g_off.mat","q3");
%     save("q4_g_off.mat","q4");
%     save("q5_g_off.mat","q5");
%     save("q6_g_off.mat","q6");
end