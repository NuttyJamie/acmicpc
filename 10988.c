#include <stdio.h>
#include <string.h>

int main()
{
	char w[100];
	int i;

	scanf("%s", w);

	for(i=0; i < strlen(w)/2; ++i)
	{
		if(w[i] != w[strlen(w)-i-1])
		{
			putchar('0');
			return 0;
		}
	}
	putchar('1');
}
