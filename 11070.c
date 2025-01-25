#include <stdio.h>

int main()
{
	int t, n, m, a, b, p, q, min=1000, max=0;
	int team[2][1000]={0};

	for(scanf("%d", &t); t; --t, min=1000, max=0)
	{
		scanf("%d %d", &n, &m);
		while(m--)
		{
			scanf("%d %d %d %d", &a, &b, &p, &q);
			team[0][a-1]+=p;
			team[1][a-1]+=q;
			team[0][b-1]+=q;
			team[1][b-1]+=p;
		}
		for(int i=0; i < n; ++i)
		{
			long long w;
			if(!team[0][i] && !team[1][i])	w=0;
			else
			{
				w=(long long)team[0][i]*team[0][i]*1000;
				w/=((long long)team[0][i]*team[0][i]+(long long)team[1][i]*team[1][i]);
			}
			max=(max < w)?	w:max;
			min=(min > w)?	w:min;
			team[0][i]=0;
			team[1][i]=0;
		}
		printf("%d\n%d\n", max, min);
	}
}
