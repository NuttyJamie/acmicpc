#include <stdio.h>

int main()
{
	char s;
	int i=0, j=1, sum=0;
	int n[7];

	while((s=getchar()) != '\n')
	{
		if(s != ',')
		{
			n[i]=s-48;
			++i;
		}
		else
		{
			for(--i, j=1; i >= 0; --i, j*=10) sum+=j*n[i];
			i=0;
			j=1;
		}
	}
	for(--i, j=1; i >= 0; --i, j*=10) sum+=j*n[i];
	printf("%d", sum);
}
