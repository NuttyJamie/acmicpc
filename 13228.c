#include <stdio.h>

int main()
{
	int t, x1, y1, f1, x2, y2, f2;

	scanf("%d", &t);

	while(t--)
	{
		scanf("%d %d %d %d %d %d", &x1, &y1, &f1, &x2, &y2, &f2);
		x1=(x2-x1 < 0)?	x1-x2:x2-x1;
		y1=(y2-y1 < 0)?	y1-y2:y2-y1;
		printf("%d\n", x1+y1+f1+f2);
	}
}
