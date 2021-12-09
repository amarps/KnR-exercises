#include <stdio.h>

int main()
{
  printf("\c hai\n\c");
  return 0;
}

/*****************************************************************************
warning

exercise.1.2.c:5:22: warning: unknown escape sequence: '\c'
    5 |   printf("\c hai\n\c");
      |                      ^
exercise.1.2.c:5:22: warning: unknown escape sequence: '\c'
*****************************************************************************/
