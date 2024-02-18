
data = csvread("P2P.txt");
qc1 = deg2rad(data(:, 8)/1000.0)-pi/2;
qc2 = deg2rad(data(:, 9)/1000.0);

q1 = out.q1.Data;
q2 = out.q2.Data;
dq1 = ([0; diff(q1)]/0.001);
dq2 = ([0; diff(q2)]/0.001);
ddq1 = ([0; diff(dq1)]/0.001);
ddq2 = ([0; diff(dq2)]/0.001);
time = 0:0.001:(length(q1(:, 1))-1)*0.001;
%% plot contouring error
n = length(q1);
contour_error = 1.0*ones(n, 1);
X = out.X.data;
Y = out.Y.data;
Xc = data(:, 2)/10^6;
Yc = data(:, 3)/10^6;

for i = 1:n
    for j = 1:n
        err = norm([X(i) - Xc(j), Y(i) - Yc(j)]);
        if err <= contour_error(i)
            contour_error(i) = err;
        end
    end
end
figure()
plot(time, contour_error*1000.0);
xlim([0,3]);
grid on;
xlabel("time (second)");
ylabel("mm");
title("Contouring Error");
%% plot q1 trajectory
figure(1)
subplot(3, 1, 1)
plot(time, qc1, time, q1);
grid on;
xlabel("$time\,(second)$", "Interpreter", "Latex");
ylabel("$rad$", "Interpreter", "Latex");
title("$q_1$", "Interpreter", "Latex", "FontSize", 14);
legend("$q_{c_1}$", "$q_1$", "Interpreter", "Latex", "FontSize", 12);
xlim([0, inf]);
subplot(3, 1, 2)
plot(time, dq1);
grid on;
xlabel("$time\,(second)$", "Interpreter", "Latex");
ylabel("$rad/sec.$", "Interpreter", "Latex");
title("$\dot{q}_1$", "Interpreter", "Latex", "FontSize", 14);
xlim([0, inf]);
subplot(3, 1, 3)
plot(time, ddq1);
grid on;
xlabel("$time\,(second)$", "Interpreter", "Latex");
ylabel("$rad/sec^2$", "Interpreter", "Latex");
title("$\ddot{q}_1$", "Interpreter", "Latex", "FontSize", 14);
xlim([0, inf]);
%% plot q2 trajectory
figure(2)
subplot(3, 1, 1)
plot(time, qc2, time, q2);
grid on;
xlabel("$time\,(second)$", "Interpreter", "Latex");
ylabel("$rad$", "Interpreter", "Latex");
title("$q_2$", "Interpreter", "Latex", "FontSize", 14);
legend("$q_{c_2}$", "$q_2$", "Interpreter", "Latex", "FontSize", 12);
xlim([0, inf]);
subplot(3, 1, 2)
plot(time, dq2);
grid on;
xlabel("$time\,(second)$", "Interpreter", "Latex");
ylabel("$rad/sec.$", "Interpreter", "Latex");
title("$\dot{q}_2$", "Interpreter", "Latex", "FontSize", 14);
xlim([0, inf]);
subplot(3, 1, 3)
plot(time, ddq2);
grid on;
xlabel("$time\,(second)$", "Interpreter", "Latex");
ylabel("$rad/sec^2$", "Interpreter", "Latex");
title("$\ddot{q}_2$", "Interpreter", "Latex", "FontSize", 14);
xlim([0, inf]);