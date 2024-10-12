#include <stdio.h>

int main()
{
	int dice[6]={0};
	int i, t, n, score=0, reward=0, same=0, highest=0;

	scanf("%d", &n);

	while(n--)
	{
		for(i=0; i < 4; i++)
		{
			scanf("%d", &t);
			dice[t-1]++;
		}
		for(i=0; i < 6; ++i)
		{
			if(same == 2 && dice[i] == 2)
			{
				reward=score*500+(i+1)*500+2000;
				break;
			}
			else if(!same || same <= dice[i])
			{
				same=dice[i];
				score=i+1;
			}
		}
		switch(same)
		{
			case 4:
				reward=50000+score*5000;
				break;
			case 3:
				reward=10000+score*1000;
				break;
			case 2:
				if(!reward)
					reward=1000+score*100;
				break;
			case 1:
				reward=score*100;
				break;
		}
		highest=(!highest || reward > highest)?	reward:highest;
		for(i=0; i < 6; ++i)
		{
			dice[i]=0;
		}
		same=0;
		score=0;
		reward=0;
	}
	printf("%d", highest);
}

