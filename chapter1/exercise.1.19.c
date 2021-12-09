/* Exercise 1-19. Write a function reverse(s) that reverses the character string s. Use it to */
/* write a program that reverses its input a line at a time.  */
#include <stdio.h>
void reverse(char s[])
{
  int i, lastindex;

  lastindex = 0;
  
  char temp[1000];

  for (i = 0; s[i] != '\n'; i++);
  lastindex = i;
  for (int j = 0; i >= 0;) {
    temp[j] = s[i];
    i--;
    j++;
  }
  printf("%s\n", temp);
}


int main()
{
  int c, i = 0;
  char line[1000];

  while((c = getchar()) != EOF)
  {
    line[i] = c;
    i++;
  }
  reverse(line);
  return 0;
}
