%{
Algorithm steps for guessNumber

1) guess number
2) check number
3)
4) profit
%}
playerName = promptName();
myNumber = randomNumber();
fprintf("Your secret number is: %d\n", myNumber)
myInput = readNumber(playerName);
fprintf("You entered %s\n", myInput)
%assert(myInput == "Y", "The player entered y")
%[num1, num2] = newFunction();
%fprintf("num1: %d\nnum2: %d\n", num1, num2)
[result] = newFunction();
%fprintf("result 1: %d\nresult2: %d\n", result1, result2)

function playerName = promptName()
    playerName = input("What is your name: ", 's');
    %disp(playerName)
    fprintf("Hello %s, welcome to my guess the number game.\n", playerName)
end

function returnNumber = randomNumber()
    returnNumber = 42;
end

function playerInput = readNumber(firstName)
    runAgain = true;
    while runAgain
        fprintf("%s, please enter a letter:\n", firstName)
        playerInput = input("Enter Y or y: ", 's');
        if playerInput == "Y" || playerInput == "y"
            runAgain = false;
        else
            disp("You must enter a Y or y")
        end
    end
end

function varargout = newFunction(varargin)
    %firstVal = 42;
    %secondVal = 15;
    varargout{1} = 42;
    varargout{2} = 15;
end