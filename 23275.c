#include <stdio.h>

int main()
{
	int x[1000];
	int n, i;

	scanf("%d", &n);

	for(i=0; i < 1000; ++i)	x[i]=0;

	while(n--)
	{
		scanf("%d", &i);
		x[i-1]=1;
	}

	while(scanf("%d", &i) != EOF)
		x[i-1]=0;

	for(i=0; i < 1000; ++i)	if(x[i])	break;
	printf("%d", i+1);
}
