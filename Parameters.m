clc; clear;

rpm2rads = 2*pi/60;

%link3 paramters
J1 = 80*80*3.7352*1e-4;           %Total transmission inertia(kg.m^2) 
Kb1= (18.3*1e-3)/rpm2rads;  %V/rad/s
Kt1= 0.524;                 %N.m/A rms
L1= 4300*1e-6;              %H
R1= 1.36;                    %ohm    

% link2 parameters
J2 = 100*100*3.0413*1e-4;           %Total transmission inertia(kg.m^2) 
Kb2= (18.3*1e-3)/rpm2rads;  %V/rad/s
Kt2= 0.524;                 %N.m/A rms
L2= 4300*1e-6;              %H
R2= 1.36;                   %ohm

%link3 parameters
J3 = 80*80*1.1203*1e-4;           %Total transmission inertia(kg.m^2) 
Kb3= (16.6*1e-3)/rpm2rads;  %V/rad/s
Kt3= 0.476;                 %N.m/A rms
L3= 7100*1e-6;              %H
R3= 2.7;                    %ohm         

%link4 parameters
J4 = 81*81*5.769*1e-5;           %Total transmission inertia(kg.m^2) 
Kb4= (14.8*1e-3)/rpm2rads;  %V/rad/s
Kt4= 0.424;                 %N.m/A rms
L4= 7600*1e-6;              %H
R4= 9.3;                    %ohm   

%link5 parameters
J5 = 80*80*1.196*1e-5;           %Total transmission inertia(kg.m^2) 
Kb5= (8.6*1e-3)/rpm2rads;  %V/rad/s
Kt5= 0.246;                 %N.m/A rms
L5= 6000*1e-6;              %H
R5= 6.7;                    %ohm   

%link6 parameters
J6 = 50*50*1.466*1e-5;           %Total transmission inertia(kg.m^2) 
Kb6= (8.6*1e-3)/rpm2rads;  %V/rad/s
Kt6= 0.246;                 %N.m/A rms
L6= 6000*1e-6;              %H
R6= 6.7;                    %ohm   


load('FricPrt03.mat');

B = FP.fvP;
b1 = B(1); %first joint bm
b2 = B(2); %second joint bm
b3 = B(3); %third joint bm
b4 = B(4);
b5 = B(5);
b6 = B(6);

save('parameters.mat');