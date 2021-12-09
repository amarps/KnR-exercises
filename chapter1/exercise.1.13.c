#include <stdio.h>

/* Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is */
/* easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.  */
int main()
{
    int c, i, wl;

    wl = 0;

    while ((c = getchar()) != EOF) {
	if(c == ' ' || c == '\n' || c == '\t')
	{
	    printf("\t\t %d\t\t", wl);
	    for (i = 0; i < wl; ++i) {
		for (int j = 0; j < 5; ++j) {
		    printf("\u2587");
		}
	    }
	    putchar('\n');
	    wl = 0;
	    continue;
	}
	putchar(c);
	wl++;
    }
}
