#include <stdio.h>

int main()
{
	int x, y, w, h, row, col;

	scanf("%d%d%d%d", &x, &y, &w, &h);

	row=(x<w-x)?	x : w-x;
	col=(y<h-y)?	y : h-y;
	x=(row<col)?	row : col;
	printf("%d", x);
}
