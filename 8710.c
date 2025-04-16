#include <stdio.h>

int main()
{
	int k, w, m;

	scanf("%d %d %d", &k, &w, &m);

	printf("%d", (w-k)/m+(((w-k)%m)?	1:0));
}
