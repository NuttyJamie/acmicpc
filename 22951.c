#include <stdio.h>

int main()
{
	int card[1000];
	int n, k, i, j, t, total;

	scanf("%d %d", &n, &k);

	total=n*k;

	for(i=0; i < total; ++i)
		scanf("%d", &card[i]);

	i=0;
	for(j=total; j > 1; --j)
	{
		t=card[i];
		card[i]=0;
		while(t)
		{
			++i;
			if(i < total)
			{
				if(card[i])	--t;
			}
			else i=0;
		}
	}

	for(i=0; i < total; ++i)
	{
		if(card[i])
		{
			printf("%d %d", i/k+1, card[i]);
			break;
		}
	}
}
