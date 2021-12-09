#include <stdio.h>

/* Exercsise 1-6. Verify that the expression `getchar() != EOF` is 0 or 1.  */
int main() {
    int c ; /* input char */
    int isexpr; /* is expression `getchar() != eof` is 0 or 1 */
    while (1) {
	isexpr = (c = getchar()) != EOF;
	printf("value of getchar expr = %d\n", isexpr);
	if(!isexpr)
	    return 0;
  }
}
