#include <stdio.h>

int main()
{
	int n, a, b, wina=0, winb=0;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d %d", &a, &b);
		if(a < b)		++winb;
		else if(a > b)	++wina;
	}
	
	printf("%d %d", wina, winb);
}
