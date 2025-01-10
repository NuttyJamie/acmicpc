#include <stdio.h>

int main()
{
	char s[82];

	while(1)
	{
		int i=0;
		fgets(s, 82, stdin);
		if(s[0] == '*' && s[1] == '*' && s[2] == '*' && s[3] == '\n') break;
		while(s[i] != '\n') ++i;
		while(i) putchar(s[--i]);
		putchar('\n');
	}
}
