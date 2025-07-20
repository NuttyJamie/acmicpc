#include <stdio.h>

int main()
{
	int k, i;

	scanf("%d", &k);

	for(i=0; i < k; ++i)
	{
		int n, s, date, dist, v, total=0;

		scanf("%d %d %d", &n, &s, &date);

		s*=date;

		while(n--)
		{
			scanf("%d %d", &dist, &v);

			if(dist <= s)	total+=v;
		}

		printf("Data Set %d:\n%d\n\n", i+1, total);
	}
}
