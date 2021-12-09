#include <stdio.h>
#include <string.h>

/** @return first match end index of t in s, -1 if none  */
int strindex(char s[], char t[])
{
    int i, j;
    i = 0;
    while(s[i++])
    {
	j = 0;
	while(t[j] && t[j] == s[i])
	{
	     j++;
	     i++;
	    if(!t[j])
	    {
		return i;
	    }
	}
    }
    return -1;
}

int main()
{
    while (1) {
	char stringText[100];
	char* searchKey = "kamu";
	int i, c;
	i = 0;
	while ((c = getchar()) && c  != '\n' && c != EOF)
	    stringText[i++] = c;

	int matchIndex = strindex(stringText, searchKey);
	if(matchIndex < 0)
	    continue;

	printf("%d", matchIndex);
	for (int i = matchIndex - sizeof(searchKey); ; ) {
	    printf("%c", stringText[i]);
	    if(!stringText[i++])
	    {
		printf("\n");
		break;
	    }
	}
    }
    return 0;
}
