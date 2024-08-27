#include <stdio.h>

int main()
{
	int card[100];
	int n, m, i, j, k, sum=0;

	scanf("%d %d", &n, &m);

	for(i=0; i < n; ++i) scanf("%d", &card[i]);

	for(i=0; i < n-2; ++i)
	{
		for(j=i+1; j < n-1; ++j)
		{
			for(k=j+1; k < n; ++k)
			{
				if(card[i]+card[j]+card[k] == m)
				{
					printf("%d", m);
					return 0;
				}
				else if(card[i]+card[j]+card[k] > m) continue;
				else if(sum < card[i]+card[j]+card[k])
						sum=card[i]+card[j]+card[k];
			}	
		}
	}
	printf("%d", sum);
}
