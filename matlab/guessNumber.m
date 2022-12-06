%{
Algorithm steps for guessNumber

1) guess number
2) check number
3)
4) profit
%}

winState = game();
if winState == 1
    disp("You won")
else
    disp("You lost")
end

function winState = game()
    randNum = randomNumber();
    for i = 1:6
        playerNumber = readNumber();
        checkGuessAnswer = checkGuess(playerNumber, randNum);
        if checkGuessAnswer == -1
            %do something
        elseif checkGuessAnswer == 2
            %do something else
        else
            %numbers are the same
            winState = 1;
            break
        end
    end
    winState = 0;
end

function checkGuessAnswer = checkGuess(playerGuess, randNum)
end

function playerNumber = readNumber()
end

function randNum = randomNumber()
end

function greetPlayer(playerName)
end

function playerName = promptName()
end



%{ 

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

%}