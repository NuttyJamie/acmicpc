#include <stdio.h>

struct lap
{
	char team;
	int m;
	int ss;
	int sss;
	int score;
};

int main()
{
	struct lap lap[8];
	struct lap *p[8];
	char r=0, b=0;

	for(int i=0; i < 8; ++i)
	{
		scanf("%d %*c %2d %*c %3d %c ", \
				&lap[i].m, &lap[i].ss, &lap[i].sss, &lap[i].team);
		p[i]=&lap[i];
	}

	for(int i=1; i < 8; ++i)
	{
		int j=i-1;
		struct lap *temp=p[i];
		while (j >= 0 && (temp->m < p[j]->m ||
						 (temp->m == p[j]->m && temp->ss < p[j]->ss) ||
						 (temp->m == p[j]->m && temp->ss == p[j]->ss && temp->sss < p[j]->sss)))
		{
			p[j+1]=p[j];
			--j;
		}
		p[j+1]=temp;
	}

	for(int i=0; i < 8; ++i)
	{
		switch (i)
		{
			case 0:
				p[i]->score=10;
				break;
			case 1:
				p[i]->score=8;
				break;
			case 2:
				p[i]->score=6;
				break;
		}
		if(i > 2)	p[i]->score=10-i-2;
		if(p[i]->team == 'R')	r+=p[i]->score;
		else					b+=p[i]->score;
	}
	puts((r > b)? "Red":"Blue");
}
