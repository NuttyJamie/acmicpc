#include <stdio.h>

int main()
{
	int s1, s2;

	scanf("%d %d", &s1, &s2);
	putchar((s2-s1 > s1)?	'H':'E');
}
