#include <stdio.h>

int main()
{
	int x, n, i, a, b, t=0;

	scanf("%d %d", &x, &n);

	for(i=0; i<n; ++i)
	{
		scanf("%d %d", &a, &b);
		t=t+(a*b);
	}
	if(x == t)	printf("Yes");
	else		printf("No");
}
