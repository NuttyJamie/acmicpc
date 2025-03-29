#include <stdio.h>

int main()
{
	int a1, a2, a3, d;

	while(1)
	{
		scanf("%d %d %d", &a1, &a2, &a3);
		if(!a1 & !a2 & !a3)	break;

		d=a2-a1;
		if(d && (a3-a2 == d))	printf("AP %d\n", a3+d);
		else					printf("GP %d\n", a3*(a2/a1));
	}
}
