#include <stdio.h>

/* Exercise 1-7. Write a program to print the value of EOF.  */

int main()
{
    int c;
    while (1) {
      if ((c = getchar()) == EOF) {
        printf("the value of EOF is: %d", c);
	return 0;
      }
    }
}
