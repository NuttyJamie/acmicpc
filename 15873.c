#include <stdio.h>

int main()
{
	char s[5];
	int i=0;

	scanf("%s", s);

	while(s[i] != '\0') ++i;

	if(i == 2)		printf("%d", (s[0]-'0')+(s[1]-'0'));
	else if(i == 3)	
	{
		if(s[1] == '0')
			printf("%d", (int)(s[2]-'0')+10);
		else
			printf("%d", (int)(s[0]-'0')+10);
	}
	else	printf("20");
}
