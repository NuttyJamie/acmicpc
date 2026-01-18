#include <stdio.h>

int main()
{
	int t, n, f, sum=0;

	scanf("%d %d", &t, &n);

	while(n--)
	{
		scanf("%d", &f);
		sum+=f;
	}

	puts((t <= sum)?	"Padaeng_i Happy":"Padaeng_i Cry");
}
