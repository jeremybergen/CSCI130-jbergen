disp("This will print out 3 geometric shapes with *'s")
newHeight = promptHeight();

printSquare(newHeight)
fprintf("\n\n")

printTriangle(newHeight)
fprintf("\n\n")

printInvTriangle(newHeight)
fprintf("\n\n")

function height = promptHeight()
    height = input("Please enter the height: ");
end

function printInvTriangle(height)
    %{
    height = 3
    * * *
    * *
    *
    %}
    %for num = height:-1:1
    for num = 1:height
        %for num2 = 1:height-num+1
        for num2 = height:-1:num
            fprintf("* ")
        end
        fprintf("\n")
    end
end

function printTriangle(height) 
    %{
    height = 3
    *
    * *
    * * *
    %}
    for num = 1:height
        for num2 = 1:num
            fprintf("* ")
        end
        fprintf("\n")
    end
end

function printSquare(height)
    %{
    height = 2
    * *
    * *
    %}
    curHeight = 0;
    while curHeight < height
        for num = 1:height
            fprintf("* ")
        end
        fprintf("\n")
        % disp(curHeight)
        curHeight = curHeight + 1;
    end
end
