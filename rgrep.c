#include <stdio.h>
#define MAXSIZE 4096

/**DON'T CHANGE MAIN                                         //DON'T JUST DESING IT TO FIT THE TEST CASES HE PROVIDED, COME UP WITH YOUR OWN
 * You can use this recommended helper function 
 * Returns true if partial_line matches pattern, starting from
 * the first char of partial_line.								//make clear and make checks to run 
 */
int nextchar (char *string){				//moving to the right to the next character in a string 
	char *next = '0/';
	 *next = *(string + sizeof(char));

	 return *next;
}

int prevchar (char *string){		//moving to the left in a string 
	char *prev = '0/';
	*prev = *(string - sizeof(char));

	return *prev;
}
int matches_leading(char *partial_line, char *pattern) {		/*compare the characters in orderd to find the characters that are in the midlle
																//recursive */
 // Implement if desire 
	/*
//index that points to the pattern or char that want ot check if matches 
//if there is no match return 0
//need a for loop to check every pattern
//a while loop to check next character with the pattern
	*/
	int i=0;
	while (pattern[i] != '\0' && partial_line[i] != '\0'){
		if (pattern[i]==partial_line[i]) {
			i++;
		} else{
			return 0;
		}
	}										
	

  return 0;
}

/*int cases(char pattern){
	char pattern = 0;

	switch (pattern){
		case '.':
			
		return 1;

		case '+'://printf(nextchar(pattern));
		return 2;

		case '?':
		return 3;

		case '\':
		return 4;

	}
	return 0;
} 
int period(char *pattern){
	if (nextchar(pattern) == '.'){
		return 1;
	}
}

int plus(char *pattern){
	if (nextchar(pattern) == '+'){
		return 2;
	}
}

int question(char *pattern){
	if (nextchar(pattern) == '?'){
		return 3;
	}
}

int backslash(char *pattern){
	if (prevchar(pattern == '\')){

	} 
}
/**
 * You may assume that all strings are properly null terminated 
 * and will not overrun the buffer set by MAXSIZE 
 *
 * Implementation of the rgrep matcher function
 */
int rgrep_matches(char *line, char *pattern) {		//patterns pointitng at the strings 
//line is the address or the array 
// Implement me 
int i = 0;
  	while (line[i] != '\0'){
  		if (pattern[i] == matches_leading(partial_line, pattern)){
  			return 1;

  			//i++;
  		}
  		return 0;
  	}

 

int main(int argc, char **argv) {	//way to send arguments to program
    if (argc != 2) {				
        fprintf(stderr, "Usage: %s <PATTERN>\n", argv[0]); //checking for errors 
        return 2;
    }

    /* we're not going to worry about long lines */
    char buf[MAXSIZE];		//array of charcters of a string 

    while (!feof(stdin) && !ferror(stdin)) {		
        if (!fgets(buf, sizeof(buf), stdin)) {
            break;
        }
        if (rgrep_matches(buf, argv[1])) {		//comparing one string with one pattern 
            fputs(buf, stdout);
            fflush(stdout);
        }
    }

    if (ferror(stdin)) {
        perror(argv[0]);
        return 1;
    }

    return 0;
}
