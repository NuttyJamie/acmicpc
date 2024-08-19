#include <stdio.h>

int main()
{
	int i, n, x, t[200];

	scanf("%d %d", &n, &x);

	for(i=0; i < n; ++i)	scanf("%d", &t[i]);

	for(i=0; i < n; ++i, ++x) 
	{
		if(t[i] < x)	break;
		if(i == n-1)	i=-1;
	}

	printf("%d", i+1);
}
