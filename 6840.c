#include <stdio.h>

int main()
{
	int i, t, n[99]={0};

	for(i=0; i < 3; ++i)
	{
		scanf("%d", &t);
		n[t-1]=1;
	}
	for(i=0; i < 99; ++i)
		if(n[i])	break;
	for(++i; i < 99; ++i)
	{
		if(n[i])
		{
			printf("%d", ++i);
			break;
		}
	}
}
