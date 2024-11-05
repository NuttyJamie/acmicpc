#include <stdio.h>

int main()
{
	int n, h, v;

	scanf("%d %d %d", &n, &h, &v);

	printf("%d", ((n-h > h)?	n-h:h)*((n-v > v)?	n-v:v)*4);
}
