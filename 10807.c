#include <stdio.h>

int main()
{
	int n, v, i, total=0, k[100]={0,};

	scanf("%d", &n);

	for(i=0; i<n; ++i)	scanf("%d", &k[i]);

	scanf("%d", &v);

	for(i=0; i<n; ++i)
	{
		if(k[i] == v)	total++;
	}

	printf("%d", total);
}
