/* Exercise 1-17. Write a program to print all input lines that are longer than 80 characters.  */
/*****************************************************************************
while (there is a line)
     if ( line is longer than 80)
          print line
*****************************************************************************/
#include <stdio.h>

int _getline(char line[])
{
  int c, i;
  for (i = 0;(c = getchar()) != EOF && c != '\n'; ++i) 
    line[i] = c;

  if(c == '\n')
  {
    line[i] = c;
    i++;
  }

  line[i] = '\0';
  
  return i;
}

int main()
{
  int maxline = 1000;
  char line[maxline];
  int len = 0;
  while((len = _getline(line)) > 0)
    {
      printf("%d\n", len);
    if (len > 80)
      {
	printf("longer than 80 %s\n", line);
      }
    }
}
