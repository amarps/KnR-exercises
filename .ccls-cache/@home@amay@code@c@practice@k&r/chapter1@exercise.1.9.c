#include <stdio.h>

/* Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or */
/* more blanks by a single blank. */
int main() {
    int c;
    int isblk = 0;
    while ((c = getchar()) != EOF)
    {
	if (isblk && c == ' ') {
	    continue;
        } else if (c == ' ') {
	    isblk = 1;
        }
	else {
	    isblk = 0;
	}
	putchar(c);
    }
    return 0;
}

