#include <stdio.h>

int main()
{
	int d, h, m, total=-1;

	scanf("%d %d %d", &d, &h, &m);

	total=(d-11)*60*24+(h-11)*60+(m-11);
	printf("%d", ((total < 0)?	-1:total));
}
