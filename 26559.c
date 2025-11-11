#include <stdio.h>

int main()
{
	struct friends
	{
		int	num;
		int order;
	}friend[500];
	int n, m, i, j;
	char name[500][31];

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d", &m);

		for(i=0; i < m; ++i)
		{
			scanf("%s %d", name[i], &friend[i].num);
			friend[i].order=i;
		}

		for(i=1; i < m; ++i)
		{
			struct friends tmp={.num=friend[i].num, .order=friend[i].order};
			for(j=i-1; 0 <= j && tmp.num > friend[j].num; --j)
			{
				friend[j+1].num=friend[j].num;
				friend[j+1].order=friend[j].order;
			}
			friend[j+1].num=tmp.num;
			friend[j+1].order=tmp.order;
		}

		for(i=0; i < m-1; ++i)
			printf("%s, ", name[friend[i].order]);
		printf("%s\n", name[friend[i].order]);
	}
}

