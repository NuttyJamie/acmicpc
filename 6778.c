#include <stdio.h>

int main()
{
	int a, e;

	scanf("%d %d", &a, &e);

	if(a > 2 && e < 4)	puts("TroyMartian");
	if(a < 7 && e > 1)	puts("VladSaturnian");
	if(a < 3 && e < 4)	puts("GraemeMercurian");
}
