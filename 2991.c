#include <stdio.h>

int main()
{
	int a, b, c, d;
	int p, m, n;

	scanf("%d %d %d %d", &a, &b, &c, &d);
	scanf("%d %d %d", &p, &m, &n);

	p=(a >= p%(a+b) && p%(a+b))+(c >= p%(c+d) && p%(c+d));
	m=(a >= m%(a+b) && m%(a+b))+(c >= m%(c+d) && m%(c+d));
	n=(a >= n%(a+b) && n%(a+b))+(c >= n%(c+d) && n%(c+d));
	printf("%d\n%d\n%d", p, m, n);
}

