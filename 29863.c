#include <stdio.h>

int main()
{
	int x, y;

	scanf("%d %d", &x, &y);
	printf("%d", (x > 3)? 24-x+y:y-x);
}
