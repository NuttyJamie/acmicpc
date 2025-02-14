#include <stdio.h>

int main()
{
	int n, m;

	scanf("%d %d", &n, &m);
	n*=100;
	puts((n-m < 0)?	"No":"Yes");
}
