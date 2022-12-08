a = readtable("STD Cases.csv", "TextType", "string");
%disp(a(1,:))
a = convertvars(a, ["Disease", "State", "Gender", "Age", "AgeCode"], "categorical");
%disp(a(1,:))
%medianCasesByState = groupsummary(a, "State", "sum", "STDCases");
%bar(medianCasesByState.State, medianCasesByState.sum_STDCases)
stdCountByState = groupcounts(a, "STDCases", 10);
%disp(stdCountByState)
bar(stdCountByState.disc_STDCases, stdCountByState.GroupCount)
%{
a = readtable("imdb_christmas_movies_2017-22.csv", "TextType", "string");
%disp(a(1, :))
meanStarsPerYear = groupsummary(a, "certificate", "mode", ["stars"]);
disp(meanStarsPerYear)
%bar(meanStarsPerYear.release_year, meanStarsPerYear.GroupCount);
%}