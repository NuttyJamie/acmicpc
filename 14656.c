#include <stdio.h>

int main()
{
	int n, x, s=0;
	
	scanf("%d", &n);
	for(int i=1; i <= n; ++i)
	{
		scanf("%d", &x);
		if(i != x) ++s;
	}
	printf("%d", s);
}
