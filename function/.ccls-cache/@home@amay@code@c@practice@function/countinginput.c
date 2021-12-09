#include <stdio.h>

/**
 * count num of word line and character of the input
 * blank space tab and newline also included as characters
 */

#define IN 1 /* inside word */
#define OUT 0 /* outside word */

int main()
{
    int c, nc, nl, nw, state;

    nc = nl = nw = 0;

    while ((c = getchar()) != EOF) {
	++nc;
	if(c == '\n')
	    nl++;
        if (c == ' ' || c == '\n' || c == '\t') {
	    state = OUT;
        } else if (state == OUT) {
	    state = IN;
	    ++nw;
        }
    }
    printf("%d, %d, %d", nc, nl, nw);
    return 0;
}
