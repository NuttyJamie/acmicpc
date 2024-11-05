#include <stdio.h>

int main()
{
	int e, f, c;

	scanf("%d %d %d", &e, &f, &c);

	for(e+=f, f=0; e >= c; ++f) e-=c-1;
	printf("%d", f);
}
