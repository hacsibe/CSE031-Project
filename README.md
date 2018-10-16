# CSE031-Project
rgrep: Search through strings based on patterns, will return strings from file that match the input pattern

Implementation*
If the line pointer does has not encountered a null terminator..
Start by itterating through the strings in the text file
Check if character from pattern is found in any string in the text file
Move pointer through every character in each string line, compare every character in the string to the given wildcard cases
In switch operator that takes in a character..
Case 1: Return 1 if string contains matching period(.) character
Case 2: Return 2 if string contains matching plus sign(+) character
Case 3: Return 3 if string contains matching question mark(?) character
Case 4: Return 4 if string contains matching backlash(\) character
Default Case: If nothing applies, return 0.
Function for Case 1: (Period) will match any character
Function for Case 2: (Plus sign) If the next character pointer pattern contains a "+", return 1 (TRUE), else return 0 (FALSE)
Function for Case 3: (Question) If the next character pointer pattern contains a "?" return 1 (TRUE), else return 0 (FALSE)
Function for Case 4: (Backlash) If the previous character pointer pattern contains a "\" return 1 (TRUE), else return 0 (FALSE)
Check for matches of cases with special wildcard characters and without(Function for checking these conditions)
Compare If line pointer is equal to pattern pointer and not equal to any wildcard characters, return 1 (TRUE)
...
