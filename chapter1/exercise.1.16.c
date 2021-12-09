/* Exercise 1-16. Revise the main routine of the longest-line program so it will correctly print */
/* the length of arbitrary long input lines, and as much as possible of the text.  */

/*****************************************************************************/
/*                                     
while (is there other line)
     if( line is longer than previous line)
        save line
        save line lenght
print longest line
print longest line length
 */
/*****************************************************************************/


#include <stdio.h>

#define MAXLINE 1000

/* get line from input and a store it to _line*/
int _getline(char _line[])
{
  int i, c;

  for(i = 0; (c = getchar()) != EOF && c != '\n'; i++) /* get each char and assign to line */
    _line[i] = c;

  if(c ==  '\n') {
    _line[i] = c;
    /* i++;               /\* count new line as length of line *\/ */
  }

  _line[i] = '\0'; /* add null terminator at the end of line */

  return i;
}

/* copy _from to _to assuming _to is big enough */
void copy(char _from[], char _to[])
{
  int i = 0;

  while ((_to[i] = _from[i]) != '\0')
    i++;
}

int main()
{
  char line[MAXLINE];         /* hold every char of line */
  char longest[MAXLINE];      /* hold longest line */
  int len;                    /* current line */
  int maxlen;                 /* current longest line */
  len = maxlen = 0;
  while(1){
    len = _getline(line);
    if(!len)                 /* quit if there is no character in line */
    {
      break;
    }
      
    if (len > maxlen)
    {
      maxlen = len;
      copy(line, longest);
    }
    
  }

  printf("Longest line: %s\n", longest);
  printf("%d\n", maxlen);

}
