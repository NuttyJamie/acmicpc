#include <stdio.h>

int main()
{
	char n[30]={0};
	int i, buf;

	for(i=0; i < 28; ++i)
	{
		scanf("%d", &buf);
		n[buf-1]=1;
	}

	for(i=0; i < 30; ++i)
	{
		if(n[i] == 0)	printf("%d\n", i+1);
	}
}
