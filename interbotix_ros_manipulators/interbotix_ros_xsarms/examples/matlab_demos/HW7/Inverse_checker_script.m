clear; clc;

L1 = 196;
L2 = 193;
L3 = 100;

for th1=0:22.5:337.5
    for th2 = 0:22.5:337.5
        for th3 = 0:22.5:337.5
            for th4 = 0:22.5:337.5
                for th5 = 0:22.5:337.5
                   
                    thin = [th1 th2 th3 th4 th5];

                    Tin =  [sind(th1)*sind(th5) + cosd(th2 + th3 + th4)*cosd(th1)*cosd(th5),   cosd(th5)*sind(th1) - cosd(th2 + th3 + th4)*cosd(th1)*sind(th5), -sind(th2 + th3 + th4)*cosd(th1), cosd(th1)*(L2*cosd(th2 + th3) + L1*cosd(th2) - L3*sind(th2 + th3 + th4));
                          cosd(th2 + th3 + th4)*cosd(th5)*sind(th1) - cosd(th1)*sind(th5), - cosd(th1)*cosd(th5) - cosd(th2 + th3 + th4)*sind(th1)*sind(th5), -sind(th2 + th3 + th4)*sind(th1), sind(th1)*(L2*cosd(th2 + th3) + L1*cosd(th2) - L3*sind(th2 + th3 + th4));
                            -sind(th2 + th3 + th4)*cosd(th5),                                sind(th2 + th3 + th4)*sind(th5),          -cosd(th2 + th3 + th4),          - L2*sind(th2 + th3) - L1*sind(th2) - L3*cosd(th2 + th3 + th4);
                                       0                                                         0,                              0,                                                                    1];
                    
                    %Comment out the for loops and the the end statements
                    %Uncomment the lines from thin to Tin above to test this
                    %specific case below
                    % 
                    % Tin = [0.8660  0      0.5000     0;
                    %        0.5000  0     -0.8660     0;
                    %        0       1      0          100;
                    %        0       0      0          1];

                    px = Tin(1,4); 
                    
                    py = Tin(2,4); 
                    pz=Tin(3,4);
                    
                    temp = double(atan2d(py,px));
                    theta(1,:) = [temp, temp, temp+180, temp+180]; %theta1 known
                    
                    if abs(cosd(theta(1,1))) > 0.1
                        s234 = -Tin(1,3)./cosd(theta(1,:));
                    else
                        s234 = -Tin(2,3)./sind(theta(1,:));
                    end
                    
                    temp= -Tin(3,3);
                    c234 = [temp temp temp temp];
                    theta234 = atan2d(s234,c234); %theta234 known

                    theta234(theta234<0) = theta234(theta234<0) + 360;
                    
                   % %Handles  theta5

                    if abs(s234) < 1e-6

                        if c234 > 0

                            c1m5 = atan2d(Tin(1,2),Tin(1,1));
                            theta(5,:) = theta(1,:) - c1m5;
                        
                        else
                            c1p5 = atan2d(Tin(1,2),-1*Tin(1,1));
                            theta(5,:) = c1p5 - theta(1,:);

                        end
                        
                    else   
                         theta(5,:) = atan2d(Tin(3,2)./s234,-Tin(3,1)./s234); %theta5 known
                    end

                   
                    

                    if abs(cosd(theta(1,1))) > 0.1
                        A = double(px./cosd(theta(1,:)) + L3*s234);
                    else
                        A = double(py./sind(theta(1,:)) + L3*s234);
                    end
                    
                    B = double(-L3*c234 - pz);
                    
                    a = double(2*A*L1);
                    b = double(2*B*L1);
                    c = double(A.^2 + B.^2+L1^2-L2^2);
                    
                    m = [1 -1 1 -1];

                    rad = a.^2+b.^2-c.^2;
                    if abs(rad) < 1.0e-3
                        rad = 0;     
                    end
                    theta(2,:)= atan2d(b,a) + m.*atan2d(sqrt(rad),c); %theta2 known;
                                        
                   
                    
                    theta23 = atan2d(B-L1*sind(theta(2,:)), A-L1*cosd(theta(2,:)));
                    
                    theta(3,:)= theta23 - theta(2,:) ;%theta3 known;
                    theta(4,:) = theta234 - theta23; %theta4 known;
        
                    for j=1:4
                        thc1 = theta(1,j);
                        thc2 = theta(2,j);
                        thc3 = theta(3,j);
                        thc4 = theta(4,j);
                        thc5 = theta(5,j);
                      
                       Tcheck =  [sind(thc1)*sind(thc5) + cosd(thc2 + thc3 + thc4)*cosd(thc1)*cosd(thc5),   cosd(thc5)*sind(thc1) - cosd(thc2 + thc3 + thc4)*cosd(thc1)*sind(thc5), -sind(thc2 + thc3 + thc4)*cosd(thc1), cosd(thc1)*(L2*cosd(thc2 + thc3) + L1*cosd(thc2) - L3*sind(thc2 + thc3 + thc4));
                               cosd(thc2 + thc3 + thc4)*cosd(thc5)*sind(thc1) - cosd(thc1)*sind(thc5), - cosd(thc1)*cosd(thc5) - cosd(thc2 + thc3 + thc4)*sind(thc1)*sind(thc5), -sind(thc2 + thc3 + thc4)*sind(thc1), sind(thc1)*(L2*cosd(thc2 + thc3) + L1*cosd(thc2) - L3*sind(thc2 + thc3 + thc4));
                            -sind(thc2 + thc3 + thc4)*cosd(thc5),                                sind(thc2 + thc3 + thc4)*sind(thc5),          -cosd(thc2 + thc3 + thc4),          - L2*sind(thc2 + thc3) - L1*sind(thc2) - L3*cosd(thc2 + thc3 + thc4);
                                                        0,                                                            0,                              0,                                                                    1];
                       Tin;
                       Tcheck;
                       Tdif = Tin-Tcheck;
                       Tdif(abs(Tdif) < 1e-5) = 0;

                        if (max(max(Tdif)) > 1e-6)
                            Tdif 
                           pause()
                        end


                    end

                end
            end
        end
    end
    th1
end


