#include <stdio.h>

int main()
{
	int count=0, max=0;
	char n[300001];
	char *c=n;

	scanf("%s", n);

	while(*c != '\0')
	{
		if(*c ^ '1')
		{
			max=1;
			break;
		}
		++c;
	}
	while(*c != '\0')
	{
		if(*c ^ '1')	++count;
		else
		{
			if(max < count) max=count;
			count=0;
		}
		++c;
	}

	printf("%d", max/2+max%2);
}
