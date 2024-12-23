#include <stdio.h>

int main()
{
	char c, i;
	int max=0;
	int w[26]={0,};

	while((c=getchar()) != '\n')
	{
		if(c < '[')	++w[c-65];
		else		++w[c-97];
	}

	for(c=0; c < 26; ++c)
	{
		if(max < w[c])
		{
			max=w[c];
			i=c;
		}
		else if(max == w[c])	i=-1;
	}

	putchar((i < 0)?	'?':'A'+i);
}
