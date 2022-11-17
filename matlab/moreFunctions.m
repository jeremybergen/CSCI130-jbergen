import someFunction.*

someFunction()
%{
[newX, newY, newString] = promptPoints(5);

fprintf("Your point is: (%d, %d)\n", newX, newY)
fprintf("Hello %s\n", newString)

function [x, y, someString] = promptPoints(~)
    x = input("Enter the x coordinate: ");
    y = input("Enter the y coordinate: ");
    someString = "Jeremy";
end
%}