#include <stdio.h>

int main()
{
	int i, flag=1;
	char name[21];
	char c;

	scanf("%s ", name);

	for(i=0; (c=getchar()) != '\n'; ++i)
	{
		if(c != name[i])
		{
			flag=0;
			break;
		}
	}

	printf("%d", (flag && !name[i]?	0:1550));
}
