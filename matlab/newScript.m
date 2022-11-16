%{
myPick = menu("Pick an option", "Option1", "Option2", "Option3");

disp(myPick)
%}
%{
num1 = input("Please enter a letter: ", 's');

switch(num1)
    case "Hello"
        disp("You entered A")
    case {'B', 'b'}
        disp("You entered B")
    case "42"
        disp("You entered 42")
    otherwise
        disp("You entered something else")
end
%}
%{
if num1 == 0
    disp("Your number is zero")
elseif mod(num1, 2) == 1
    disp("Your number is odd")
else
    disp("Your number is even")
end
%}


%{
x = input("Please enter a number: ");
y = input("Please enter a number: ");
z = x+y;

output = sprintf("%0.2f + %0.2f = %0.2f", x, y, z);
% output = [num2str(x), " + ", num2str(y), " = ", num2str(z)];
disp(output)
%}
