#include <stdio.h>

int main()
{
	int n, a, b, t=-1;

	scanf("%d", &n);
	while(n--)
	{
		scanf("%d %d", &a, &b);
		if(a <= b) t=(t == -1 || b < t)? b:t;
	}
	printf("%d", t);
}
