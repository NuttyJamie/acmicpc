#include <stdio.h>

int main()
{
	int a, i, t=0;

	for(i=0; i < 4; ++i)
	{
		scanf("%d", &a);
		t+=a;
	}

	printf("%d\n%d", t/60, t%60);
}
