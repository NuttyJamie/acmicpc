#include <stdio.h>

int main()
{
	char buf[201];
	int n, l, i, j, k;

	while(1)
	{
		scanf("%d", &n);
		if(!n)	break;
		scanf("%s", buf);
		for(l=0; buf[l] != '\0'; ++l);
		k=l/n-1;
		i=j=0;
		while(l--)
		{
			if(j%2) putchar(buf[n*(j+1)-(i+1)]);
			else	putchar(buf[n*j+i]);
			if(j == k)	++i, j=0;
			else		++j;
		}
		putchar('\n');
	}
}
