#include <stdio.h>

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	while(x <= y)
	{
		printf("All positions change in year %d\n", x);
		x+=60;
	}
}
