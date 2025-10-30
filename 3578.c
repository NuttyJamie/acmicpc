#include <stdio.h>

int main()
{
	int h, d;

	scanf("%d", &h);

	if(!h)			printf("1");
	else if(h == 1)	printf("0");
	else if(h & 1)
	{
		d=h>>1;
		printf("4");
		while(d--) printf("8");
	}
	else
	{
		d=h>>1;
		while(d--) printf("8");
	}
}
