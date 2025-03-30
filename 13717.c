#include <stdio.h>

int main()
{
	char p[70][21]={0};
	int i, n, k, m, total=0, current=0, max_count=0, max_ord=0;

	scanf("%d", &n);

	for(i=0; i < n; ++i, current=0)
	{
		scanf("%s %d %d", p[i], &k, &m);

		while(k <= m)	m-=k, m+=2, ++current;
		if(!max_count || (max_count < current))
		{
			max_count=current;
			max_ord=i;
		}
		total+=current;
	}
	printf("%d\n%s", total, p[max_ord]);
}
