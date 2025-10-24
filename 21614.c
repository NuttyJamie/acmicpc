#include <stdio.h>

int main()
{
	int n;
	char left[]="left";
	char right[]="right";
	char *dir;

	while(1)
	{
		int d1, d2;

		scanf("%d", &n);

		if(n == 99999)	break;

		d1=n/10000;
		n%=10000;
		d2=n/1000;
		n%=1000;

		if(d1+d2)	dir=(d1+d2 & 1)?	left:right;
		printf("%s %d\n", dir, n);
	}
}
