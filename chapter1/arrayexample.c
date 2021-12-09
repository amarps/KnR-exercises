/* write a program to count the number of occurrences of each digit, of white space */
/* characters (blank, tab, newline), and of all other characters.  */
#include <stdio.h>

int main()
{
    int c, i, nwhite, nother;
    int ndigits[10]; /* hold digit in every item. order == digit hold */

    nwhite = nother = 0;

    for (i = 0; i < 10; ++i) {
	ndigits[i] = 0;
    }

    while ((c = getchar()) != EOF) {
	if(c == '\t' || c == ' ' || c == '\n')
	    nwhite++;
	else if(c >= '0' && c <= '9')
	    ++ndigits[c-'0'];
        else {
	    nother++;
        }
    }

    printf("length of white %d, length of other: %d\n", nwhite, nother);
    for (i = 0; i < 10; ++i) {
	printf("%d ,", ndigits[i]);
    }
    printf("\n");

    

    return 0;
}
