/* Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each */
/* backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an */
/* unambiguous way.  */

#include <stdio.h>

int main()
{
    int c;
    char escchr[2] = {'\\', 'e'}; /* for unitilized escape char */
    while ((c = getchar()) != EOF) {
      if (c == '\t' || c == '\\' || c == ' ') {
	  if (c == '\t')
	      escchr[1] = 't';
	  else if (c == '\\')
	      escchr[1] = '\\';
	  else if (c == ' ')
	      escchr[1] = 'b';
	  printf("%s", escchr);
	  continue;
      }
      putchar(c);
    }
}
