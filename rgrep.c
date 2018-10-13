#include <stdio.h>
#define MAXSIZE 4096

/**DON'T CHANGE MAIN                                         //DON'T JUST DESING IT TO FIT THE TEST CASES HE PROVIDED, COME UP WITH YOUR OWN
 * You can use this recommended helper function 
 * Returns true if partial_line matches pattern, starting from
 * the first char of partial_line.								//make clear and make checks to run 
 */
int nextchar (char *string){
	char *next = '0/';
	 *next = *(string + sizeof(char));

	 return *next;
}

int prevchar (char *string){
	char *prev = '0/';
	*prev = *(string - sizeof(char));

	return *prev;
}
int matches_leading(char *partial_line, char *pattern) {		/*compare the characters in orderd to find the characters that are in the midlle
																//recursive */
 // Implement if desire 
	/*while (*line != '\0'){

		if (pattern =){
			printf("/%c", *line);
			line++;
		}
	//}																

*/
  return 0;
}

int cases(char pattern){
	char pattern = 0;

	switch (pattern){
		case '.':
			
		return 1;

		case '+':printf(nextchar(pattern));
		return 2;

		case '?':
		return 3;

	/*	case '\':
		return 4;
*/
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

/*int backlash(char *pattern){
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

    //
    // Implement me 
    //
  /* if (*pattern == '\0'){
   		

   		if (line = ){
	
   		}
   }

*/
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
