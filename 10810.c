#include <stdio.h>

int main()
{
	int basket[100]={0};
	int n, m, i, j, k;
	
	scanf("%d %d", &n, &m);

	while(m > 0)
	{
		scanf("%d %d %d", &i, &j, &k);
		i--;
		j--;
		while(i <= j) basket[i++]=k;
		--m;
	}

	for(i=0; i< n; ++i)			printf("%d ", basket[i]);
}
