X_G_on = load("X_g_on.mat");
Y_G_on = load("Y_g_on.mat");
Z_G_on = load("Z_g_on.mat");

X_G_off = load("X_g_off.mat");
Y_G_off = load("Y_g_off.mat");
Z_G_off = load("Z_g_off.mat");

X_diff = (X_G_on.X - X_G_off.X)*1000;
Y_diff = (Y_G_on.Y - Y_G_off.Y)*1000;
Z_diff = (Z_G_on.Z - Z_G_off.Z)*1000;

figure()
subplot(3,1,1);
plot(time,X_diff);
grid on;
xlabel("time(s)");
ylabel("$\Delta X (mm)$","Interpreter","latex");

subplot(3,1,2);
plot(time, Y_diff);
grid on;
xlabel("time(s)");
ylabel("$\Delta Y (mm)$","Interpreter","latex");

subplot(3,1,3);
plot(time,Z_diff);
grid on;
xlabel("time(s)");
ylabel("$\Delta Z (mm)$","Interpreter","latex");

sgtitle("Cartesian trajectory: difference of gravity on and off");


q1_G_on = load("q1_g_on.mat");
q2_G_on = load("q2_g_on.mat");
q3_G_on = load("q3_g_on.mat");
q4_G_on = load("q4_g_on.mat");
q5_G_on = load("q5_g_on.mat");
q6_G_on = load("q6_g_on.mat");

q1_G_off = load("q1_g_off.mat");
q2_G_off = load("q2_g_off.mat");
q3_G_off = load("q3_g_off.mat");
q4_G_off = load("q4_g_off.mat");
q5_G_off = load("q5_g_off.mat");
q6_G_off = load("q6_g_off.mat");
q1_diff = (q1_G_on.q1 - q1_G_off.q1);
q2_diff = (q2_G_on.q2 - q2_G_off.q2);
q3_diff = (q3_G_on.q3 - q3_G_off.q3);
q4_diff = (q4_G_on.q4 - q4_G_off.q4);
q5_diff = (q5_G_on.q5 - q5_G_off.q5);
q6_diff = (q6_G_on.q6 - q6_G_off.q6);

figure()
subplot(3,2,1);
plot(time,q1_diff);
grid on;
xlabel("time(s)");
ylabel("$\Delta \theta_1 (degree)$","Interpreter","latex");

subplot(3,2,2);
plot(time, q2_diff);
grid on;
xlabel("time(s)");
ylabel("$\Delta \theta_2 (degree)$","Interpreter","latex");

subplot(3,2,3);
plot(time,q3_diff);
grid on;
xlabel("time(s)");
ylabel("$\Delta \theta_3 (degree)$","Interpreter","latex");

subplot(3,2,4);
plot(time,q4_diff);
grid on;
xlabel("time(s)");
ylabel("$\Delta \theta_4 (degree)$","Interpreter","latex");

subplot(3,2,5);
plot(time, q5_diff);
grid on;
xlabel("time(s)");
ylabel("$\Delta \theta_5 (degree)$","Interpreter","latex");

subplot(3,2,6);
plot(time,q6_diff);
grid on;
xlabel("time(s)");
ylabel("$\Delta \theta_6 (degree)$","Interpreter","latex");

sgtitle("Joints trajectory: difference of gravity on and off");