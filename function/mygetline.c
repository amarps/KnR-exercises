#include <stdio.h>

/**
 * @brief get input line and store it in __str
 * @param __str
 * @param __lim limit of length line
 * @return length of __str
*/
int mygetline(char __str[], int __lim) {
    int c, i;
    i = 0;

    while((c = getchar() != '\n') && c != EOF && --__lim > 0)
    {
	__str[i++] = c;
    }
    if (c == '\n') {
      __str[i++] = c;
    }
    __str[i] = '\0';

    return i;
}

int main()
{
    int MAXCHAR = 1000;
    char line[MAXCHAR];

    printf("length of line is: %d.\n", mygetline(line, MAXCHAR));
    printf("%s--\n", line);
    return 0;
}
