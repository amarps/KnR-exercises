#include <string.h>
#include <stdio.h>


/**
 * isSmaller instead of smaller
 */
int isSmaller(char *s, char *t) {
    if (strcmp(s, t) < 1)
	return 1;
    else
	return 0;
}

int main(int argc, char *argv[])
{
    printf("%d", isSmaller("3", "2"));
    return 0;
}

