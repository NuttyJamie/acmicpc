#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	if(n > 100000 || n%2024)	puts("No");
	else			puts("Yes");
}
