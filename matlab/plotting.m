%{
x = [0:0.01:4*pi];
y = tan(x);
g = cos(x);
plot(x, y)
xlabel('x')
ylabel('cos(x)')
title('y=cos(x)')
axis([0 10 -2*pi 2*pi])
%}
%{
x = [-10:0.01:10];
y = 3*x.^4+2*x.^3+7*x.^2+2*x+9;
g = 5*x.^3 + 9*x + 2;
%plot(x, y, 'r', x, g, 'g')
subplot(1, 2, 1)
plot(x, y), xlabel('x'), ylabel('y')
grid on
subplot(1, 2, 2)
plot(x, g), xlabel('x'), ylabel('y')
grid on
%}
%{
x = [0:0.01:10];
y = exp(-x).*sin(2*x + 3);
plot(x, y)
axis([0 10 -1 1])
%}
%{
x = [1:10];
y = [42, 15, 23, 94, 56, 83, 24, 6, 5, 94];
bar(x, y)
xlabel("random numbers")
ylabel("numbers")
%}
%{
[x, y] = meshgrid(-10:0.1:10, -10:0.1:10);
g = x.^2 + y.*2;
[C, h] = contour(x, y, g);
set(h, 'ShowText', 'on', 'TextStep', get(h,'LevelStep')*1)
axis([-10 10 -10 10])
%}
[x, y] = meshgrid(-2:.2:2);
g = x.*exp(-x.^2 - y.^2);
surf(x, y, g)