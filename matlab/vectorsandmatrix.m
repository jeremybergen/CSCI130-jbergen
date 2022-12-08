% vec = [5 10 15 20];
% vec = 5:5:20;
%vec = {5 "apple" 5.4};
% vec = [5 10 15 20];
% disp(vec)

% vec = [5; 10; 15; 20];
% vec = [5:5:20];
% disp(vec)
% disp(vec(2:3))

%{ 
vec = vec';
disp(vec)
vec = vec';
disp(vec)
%}

%vec1 = [1; 3; 5; 7; 9];
%vec2 = [2; 4; 6; 8; 10];
%newvec = [vec1; vec2];
%disp(newvec)
%oddvec = 1:2:10;
%evenvec = 2:2:10;
%newvec = [oddvec; evenvec];
%disp(newvec)
%disp(oddvec*5)
%disp(oddvec .^ evenvec)
%[m, n] = size(vec);
%disp(vec(n-1))

%{
v = [2:2:20];
sv = v.^2;
disp(sv)
dp = sum(sv);
magn = sqrt(dp);
disp(magn)
%}

%{
a = [1 2 3 4 5; 2 3 4 5 6; 3 4 5 6 7];
b = [1 2 3 4; 
     2 3 4 5; 
     3 4 5 6; 
     4 5 6 7; 
     5 6 7 8];
newmat = b(2:4, 2:3);
disp(b)
b(:, 3) = [];
disp(b)
%disp(newmat)
%newmat = a*b;
%disp(a(2:3, 2))
%}

a = [1 2 3;
     4 5 6;
     7 8 9];
b = [1 2 3;
     2 3 4;
     1 2 5];
det(b)
inv(b)
%disp(b^-1)
%disp(a)
%disp(a')