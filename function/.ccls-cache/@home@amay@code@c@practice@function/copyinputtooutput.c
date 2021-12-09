#include <stdio.h>

/* 
   while(waiting for input)
   print input
*/
int main()
{
    char c;
    while ((c = getchar()) != EOF) {
	putchar(c);
    }
    return 0;

    getchar();
}
