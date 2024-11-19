#include <stdio.h>

int main()
{
	int sx, sy, ex, ey, px, py;
	
	scanf("%d %d %d %d %d %d", &sx, &sy, &ex, &ey, &px, &py);

	if((sx != ex) && (sy != ey))
		putchar('1');
	else if((sx == ex && sx == px && sy < py && py < ey) ||
			(sx == ex && sx == px && sy > py && py > ey) ||
			(sy == ey && sy == py && sx > px && px > ex) ||
			(sy == ey && sy == py && sx < px && px < ex))
		putchar('2');
	else
		putchar('0');
}
