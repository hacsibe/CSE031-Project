# CSE031-Project
rgrep: Search through strings based on patterns, will return strings from file that match the input pattern

Implementation*
If the line pointer does has not encountered a null terminator..
Start by iterating through the strings in the text file
//Check if character from pattern is found in a string in the text file
Move pointer through every character in each string line, compare every character in the string to the given wildcard cases
In switch operator that takes in a character..
Case 1: Return 1 if string contains matching period(.) character
Case 2: Return 2 if string contains matching plus sign(+) character
Case 3: Return 3 if string contains matching question mark(?) character
Case 4: Return 4 if string contains matching backslash(\) character
Default Case: If nothing applies, return 0.

Function for Case 1: (Period Sign) If next character pointer pattern contains a “.”, return 1 (TRUE), else return 0 (FALSE)
Period function: (Matches any character) In function, take in char pointed at from *line and make it equal to the next char. 

Function for Case 2: (Plus sign) If the next character pointer pattern contains a "+", return 1 (TRUE), else return 0 (FALSE)
Plus_sign function: (Char may appear one or more times) In function, take in char being pointed at from *line and if char is greater than or equal to 1, return 1 (TRUE), if char is not on the string, return 0 (FALSE)

Function for Case 3: (Question) If the next character pointer pattern contains a "?" return 1 (TRUE), else return 0 (FALSE). 
Question function: (Char may or may not appear in string) In function, take in char being pointed at from *line and if char appears once 1 (TRUE), if the char appears zero times, return 0 (FALSE).

Function for Case 4: (Backlash) If the previous character pointer pattern contains a "\" return 1 (TRUE), else return 0 (FALSE)
Backlash function: (Nullifies previous character, ignores) In function, take in char being pointed at from *line and set previous char to NULL.
Function 
*Function for Default: If no wildcard characters are found, run normally.

rgrep_matches Function (Taking in 2 char pointers) - Matches
Function calls matches_leading and it is passed parameters line and pattern. Checks if the pattern and line received from matches_leading is a match and if so returns true if the pointer string matches the pointer pattern. 
Compare If line pointer is equal to pattern pointer and not equal to any wildcard characters, return 1 (TRUE).
...

matches_leading function(Taking in 2 char pointers)
COMPARES THE PATTERN WITH THE STRINGS FROM TXT FILE
- this function compares the pattern given by the user with strings in the text file
-you get the first character from the pattern and compare it to all  characters from each string, the first character from the pattern will be compared to the first character from the string, if the characters do not match, move on to the next character until you find a match. 
-After you find the first match, you will grab the second character from the pattern and compare the first two to the string. If you find a match with both characters in the string, you move on to the next characters. If you don’t find the third match when you’re comparing the two characters, you are going to go back to the place where you found the first match. 
-You are going to keep comparing the first character until you find it again in the string, when you find the first character again, you are going to grab the first two characters from the pattern and compare it to the next character. If there is a match, then you grab the third character from the pattern and compare it to the next character from the string, and if there is a match with the three characters, then you return true. 
-the function has to keep doing this until it gets to the end of the file, after it compared all the string from the file

COMPARES PERIOD WITH STRINGS FROM TXT FILE
-This function will compare the period wildcard with strings 
-what the period wildcard does is that it will accept any character as true from the string, and each period means one character
-if you have a pattern with a period wildcard, it will do the same comparisons as the pattern and string comparison.
- the thing that is different about this function is that when it reads a period, it will compare it to the string, and will return any character as true 
-if the pattern has two characters in the front, two periods in the middle, and two characters at the end: ab..cd
-then it will make a comparison with the first character from the pattern, and string until it finds a match, then it’s going to to compare the first two characters from the pattern to the string until it finds a match
-then, the third character is a period, so it’s going to compare three characters, and when it makes a comparison of the third character, it will return true, so it will be a match.
-after that, it will grab the fourth character from the pattern and match it with the string, and since this is a period, it will match it with the next character from the string.
-then it will keep making comparisons until it gets to the end of the string and then its going to move on to the next string, and make comparisons.
-it will keep doing this until it gets to the end of the file, until it has compared all strings 





COMPARES PLUS SIGN WILDCARD WITH STRINGS FROM TEXT FILE
When you type a character and the plus sign, the program it’s supposed to print out all the strings with that specific character
In function, take in char being pointed at from *line and if char is greater than or equal to 1, return 1 (TRUE), if char is not on the string, return 0 (FALSE)
The pattern with the plus sign will be compared with the string, until it finds the character we’re looking for 
With this function, you do not have to match the order of the pattern, you have print out all the strings that have the character the user is asking for
It’s going to go through the whole string, and if there is at least one character, it will be printed out 
Character has to appear at least one time
If there is more than one character, you will still print out the string
It’s going to keep on doing this until it gets to the end of the file 


COMPARES QUESTION MARK WITH STRINGS 
If you type characters and a question mark, it will print out all the strings that match the pattern given by the user, but it will not print out the character that is on the left side of the question mark
If the p


COMPARES BACKSLASH WITH STRINGS 
This function will treat a wildcard as a character, and if there are only characters, then it will just treat it as a regular pattern
If the first character matches 

