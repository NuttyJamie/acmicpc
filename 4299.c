#include <stdio.h>

int main()
{
	int sum, diff, x, y;

	scanf("%d %d", &sum, &diff);

	x=(sum+diff)/2;
	y=sum-x;

	if(x < 0 || y < 0 || (sum+diff) & 1)
		printf("-1");
	else if(x > y)		printf("%d %d", x, y);
	else				printf("%d %d", y, x);
}
