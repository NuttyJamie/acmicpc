#include <stdio.h>

int main()
{
	int n, k;

	scanf("%d %d", &n, &k);

	printf("%d", ((k+60 < n)? (k+60)*1500+(n-k-60)*3000:n*1500));
}
