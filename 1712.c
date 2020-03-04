#include <stdio.h>

int main()
{
	int A, B, C;	//cost:a+bn earn:cn

	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);	//a+bn<=cn a<=(c-b)n	n>=a/(c-b)

	if(C<=B)	puts("-1");
	else printf("%d", A/(C-B)+1);
}
