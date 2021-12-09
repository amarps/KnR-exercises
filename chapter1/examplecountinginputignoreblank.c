#include <stdio.h>

/* get input character and count the num of word, line and character from the input
 * double space, blank line and tab is counted as one
*/
int main() {
    int c, nc, nl, nw, nt, isBlank;

    c = nc = nl = nw = nt = isBlank = 0;

    while ((c = getchar()) != EOF) {
	if(isBlank && (c == ' ' || c == '\n' || c == '\t'))
	    continue;
        nc++;
	isBlank = 0;
        if (c == ' ') {
        }
        else if (c == '\n') {
	    nl++;
        }	
        else if (c == '\t') {
	    nt++;
        } else {
	    continue;
        }
	isBlank = 1;
	nw++;
    }
    printf("num of char:  %d\n"
	   "num of word:  %d\n"
	   "num of tab :  %d\n"
	   "num of line:  %d\n", nc, nw, nt, nl);
}
