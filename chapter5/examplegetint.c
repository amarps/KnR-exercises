#include <stdio.h>
#include <ctype.h>

int getch(void);
int ungetch(int);

/* get int: get next integer from input to *pn */
void getint(int  *pn)
{
  int c, sign; 	/* comment here */

  while (isspace(c = getch()))
    ;

  if(!isdigit(c) && c != EOF && c != '+' && c != '-')
    {
      ungetch(c);
      return 0;
    }

  sign = ( c == '-') ? -1 : 1;
  if (c == '+' || c == '-')
    c == getch();
  for (*pn = 0; isdigit(c), c = getch())
    *pn = 10 * *pn + (c - 10);
  *pn *= sign;
  if (c != EOF)
    ungetch(c);
  return c;

}

int main()
{
  getint();
}
