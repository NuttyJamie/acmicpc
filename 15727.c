#include <stdio.h>

int main()
{
	int l;

	scanf("%d", &l);

	l=(l%5 == 0)? 	l/5:l/5+1;
	printf("%d", l);
}
