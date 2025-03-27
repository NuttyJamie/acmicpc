#include <stdio.h>

int main()
{
	int n, x, y;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d %d", &x, &y);

		puts((x < y)?	"NO BRAINS":"MMM BRAINS");
	}
}
