#include <stdio.h>

int main()
{
	int m, x, y, ball=1;

	scanf("%d", &m);

	while(m--)
	{
		scanf("%d %d", &x, &y);
		if(x == ball || y == ball)
			ball=(x == ball)?	y:x;
	}
	printf("%d", ball);
}
