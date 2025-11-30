#include <stdio.h>

int main()
{
	long long id;
	int score[5];
	int t, i;

	score[4]=0;
	scanf("%d", &t);

	for(i=0; i < 5; ++i)
	{
		if(i < t) scanf("%d", &score[i]);
		else	  score[i]=0;
	}

	score[0]-=score[2];
	score[0]*=(score[0] < 0)?	-108:508;
	score[1]-=score[3];
	score[1]*=(score[1] < 0)?	-305:212;
	score[4]*=707;

	id=score[0]+score[1]+score[4];
	id*=4763;

	printf("%lld", id);
}
