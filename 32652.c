#include <stdio.h>

int main()
{
	int k;

	scanf("%d", &k);
	fputs("AKARAKA", stdout);
	while(--k) fputs("RAKA", stdout);
}
