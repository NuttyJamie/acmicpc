#include <stdio.h>

int main()
{
	int n, i, total=0;
	char t[10000];
	char hello;

	scanf("%d ", &n);

	for(i=0; i < n; ++i)
		scanf("%c ", &t[i]);
	scanf("%c", &hello);

	for(i=0; i < n; ++i)
		if(hello == t[i])	++total;

	printf("%d", total);
}
