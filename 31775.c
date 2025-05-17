#include <stdio.h>

int main()
{
	int i, count=0;
	char s[3][21];

	for(i=0; i < 3; ++i)
		scanf("%s", s[i]);

	for(i=0; i < 3; ++i)
	{
		if	   (s[i][0] == 'k')	count+=2;
		else if(s[i][0] == 'l')	count+=3;
		else if(s[i][0] == 'p') count+=5;
		else					break;
	}

	puts((count == 10)?	"GLOBAL":"PONIX");
}
