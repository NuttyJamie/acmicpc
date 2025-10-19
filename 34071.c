#include <stdio.h>

int main()
{
	int n, first, x, ez, hd;

	scanf("%d %d", &n, &first);

	ez=hd=first;

	while(--n)
	{
		scanf("%d", &x);

		if(x < ez)	ez=x;
		if(hd < x)	hd=x;
	}

	if(first == ez)			printf("ez");
	else if(first == hd) 	printf("hard");
	else					printf("?");
}
