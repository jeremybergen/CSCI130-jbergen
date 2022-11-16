% Wind Chill Factor
% WCF = 35.74 + 0.6215T - 35.75v^0.16 + 0.4275T(v^0.16)

%T = input("What is the current temperature: ");
%v = input("What is the current wind speed: ");


for T = 10:5:80
    for v = 1:5:50

        WCF = 35.74 + 0.6215*T - 35.75*v^0.16 + 0.4275*T*(v^0.16);
        
        fprintf("The wind chill factor for temperature %d and speed %d is: %.2f\n", T, v, WCF)
    end
end



% 1 * 8 + 1 = 9
% 12 * 8 + 2 = 98
% 123 * 8 + 3 = 987
% 1234 * 8 + 4 = 9876
% ...
% 123456789 * 8 + 9 = 987654321
%{
tic
combNumber = 0;
for i = 1:9
    combNumber = str2num(sprintf("%d%d", combNumber, i));
    fprintf("%d * 8 + %d = %d\n", combNumber, i, combNumber*8+i)
    %disp(combNumber)
end
toc
%}
%{
multiplier = 0;
prevNumber = 0;
for i = 1:9
    multiplier = multiplier * 10 + 1;
    prevNumber = prevNumber + multiplier;
    fprintf("%d * 8 + %d = %d\n", prevNumber, i, prevNumber*8+i)
end
%}





% x = 5:-1:1;
% for i = x
%     fprintf("%d\n", i)
% end

% for loopVar = range
%   do something
% end

%for i = 2:2:10
%    fprintf("%d\n", i)
%end


%disp(1:2:10)
%disp(2:2:10)

