#include <stdio.h>

int main()
{
	int num[1000]={0};
	int n, m, k;

	scanf("%d %d", &n, &m);
	while(m--)
	{
		scanf("%d", &k);
		for(int i=1; k*i <= n; ++i)
			num[k*i-1]=k*i;
	}

	for(m=0, k=0; k < n; ++k)	m+=num[k];
	printf("%d", m);
}
