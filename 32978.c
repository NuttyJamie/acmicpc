#include <stdio.h>
#include <string.h>

int main()
{
	char table[1000][21]={0}, use[999][21]={0};
	int n, i, j;

	scanf("%d", &n);

	for(i=0; i < n; ++i)
		scanf("%s", table[i]);
	for(j=0; j < n-1; ++j)
		scanf("%s", use[j]);

	for(i=0; i < n; ++i)
	{
		for(j=0; j < n; ++j)
			if(!strcmp(table[i], use[j]))	break;
		if(j == n)	break;
	}
	printf("%s", table[i]);
}
