#include <stdio.h>

int main()
{
	int m, n, turn=0;

	scanf("%d %d", &m, &n);

	printf("%d", (m <= n)? (m-1)*2:(n-1)*2+1);
}
