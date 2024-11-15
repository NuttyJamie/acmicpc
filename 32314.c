#include <stdio.h>

int main()
{
	int a, w, v;

	scanf("%d %d %d", &a, &w, &v);

	printf("%d", (a > (float)w/v)?	0:1);
}
