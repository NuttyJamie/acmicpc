#include <stdio.h>

int main()
{
	int m, d;

	scanf("%d %d", &m, &d);

	m=(m-1)*31+d;
	if(m == 49)	puts("Special");
	else 		puts((m < 49)?	"Before":"After");
}
