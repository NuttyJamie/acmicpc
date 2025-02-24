#include <stdio.h>

int main()
{
	char ord[100];
	char id[100][8];
	int n, i;

	scanf("%d", &n);

	for(i=0; i < n; ++i)	scanf("%d", &ord[i]);
	for(i=0; i < n; ++i)	scanf("%s", id[i]);
	for(i=0; i < n; ++i)	printf("%s\n", id[ord[ord[ord[i]-1]-1]-1]);
}
