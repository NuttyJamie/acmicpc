#include <stdio.h>

int main()
{
	char f, prev=0;
	int n=1;

	while((f=getchar()) != '\n')
	{
		if(prev != f || !prev) 	n*=(f == 'c')?	26:10;
		else					n*=(f == 'c')?	25:9;
		prev=f;
	}
	printf("%d", n);
}
