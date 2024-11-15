#include <stdio.h>

int main()
{
	int n, a, b, c;

	scanf("%d %d %d %d", &n, &a, &b, &c);

	printf("%d", ((n > a)? a:n)+((n > b)? b:n)+((n > c)? c:n));
}
