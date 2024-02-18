close all;
X = out.X.data;
Y = out.Y.data;
dx = ([0; diff(X)]/0.001);
dy = ([0; diff(Y)]/0.001);
ddx = ([0; diff(dx)]/0.001);
ddy = ([0; diff(dy)]/0.001);
dt=0.001
time = 0:dt:(length(X(:, 1))-1)*dt;
% X = X/1000;
%Y = Y/1000;

Xc = data(:, 1)/10^6;
Yc = data(:, 3)/10^6;

subplot(2,1,1);
plot(Xc, Yc, X,Y);
grid on;
xlabel('X');
ylabel('Y');
xlim([-inf, inf]);

hold on;
plot(Xc(1), Yc(1), 'ro');
hold off
legend("Command", "Actually", "Start Point");

V = sqrt(dx.*dx+dy.*dy);
time = 0:0.001:(size(X)-1)*0.001;
subplot(2,1,2);
plot(time,V);
grid on;
xlabel('time(s)');
ylabel('Velocity(m/s)');
