#include <stdio.h>
#include <string.h>

int main()
{
	char c[5][16];
	int i, j, length=0;

	memset(c, -1, sizeof(c));

	for(i=0; i < 5; ++i)
	{
		for(j=0; j < 16; ++j)
		{
			c[i][j]=getchar();
			if(c[i][j] == '\n')	break;
		}
		if(length < j) length=j;
	}
	
	for(j=0; j < length; ++j)
	{
		for(i=0; i < 5; ++i)
		{
			if(c[i][j] == -1 || c[i][j] == '\n')	continue;
			putchar(c[i][j]);
		}
	}
}
