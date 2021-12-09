/* Exercise 1-14. Write a program to print a histogram of the frequencies of different characters */
/* in its input.  */

/* assign char value to cachc */
/* assign freq of char fracqc */

/* check if cachc is not double */
/* check if c in cachc is defined */
#include <stdio.h>

int main()
{
    int c, i, isdef;
    c = i = isdef = 0;
    
    char cachc[100];
    int  freqc[100];

    for (;(c = getchar()) != EOF;) {
	isdef = 0;
	for (int j = 0; j < i; ++j) {
	    if (c == cachc[j]) {
		isdef = 1;
		continue;
	    }
        }

	if (i == 0 || !isdef) {
	    cachc[i] = c;
	    freqc[i] = 1;
	    i++;
        } else if (isdef) {
	    for (int j = 0; j < i; ++j) {
		if(c == cachc[j])
		    freqc[j]++;
	    }
        }
    }
    for (int j = 0; j < i; ++j) {
	printf("%c \t %d \t", cachc[j], freqc[j]);
	for (int k = 0; k < freqc[j]; ++k) {
	    for (int l = 0; l < 5; ++l) {
		printf("\u2587");
	    }
	}
	printf("\n");
    }



    return 0;
}
