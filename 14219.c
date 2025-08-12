#include <stdio.h>

int main()
{
	int n, m;

	scanf("%d %d", &n, &m);

	if(!(n*m%3))	puts("YES");
	else			puts("NO");
}
