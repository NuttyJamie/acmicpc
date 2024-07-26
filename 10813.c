#include <stdio.h>

int main()
{
	int basket[100];
	int n, m, i, j, buf;

	for(i=0; i<100; ++i)	basket[i]=i+1;

	scanf("%d %d", &n, &m);

	for(;m > 0; --m)
	{
		scanf("%d %d", &i, &j);
		buf=basket[i-1];
		basket[i-1]=basket[j-1];
		basket[j-1]=buf;
	}

	for(;n > 0;--n)
	{
		printf("%d ", basket[m]);
		m++;
	}
}
