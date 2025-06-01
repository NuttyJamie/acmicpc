#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct VOTES
	{
		int a;
		int b;
	};
		
	int p, d, i, wa, wb, v=0;

	scanf("%d %d", &p, &d);

	struct VOTES *votes=(struct VOTES *)calloc(d, sizeof(struct VOTES));
	for(int a, b, j=0; j < p; ++j)
	{
		scanf("%d", &i);
		scanf("%d %d", &a, &b);
		votes[i-1].a+=a;
		votes[i-1].b+=b;
		v+=a+b;
	}

	wa=wb=0;
	for(int j=0; j < d; ++j)
	{
		if(votes[j].a > votes[j].b)
		{
			wa+=votes[j].a-((votes[j].a+votes[j].b)/2+1);
			wb+=votes[j].b;
			printf("%c %d %d\n", 'A', votes[j].a-((votes[j].a+votes[j].b)/2+1), votes[j].b); 
		}
		else
		{
			wa+=votes[j].a;
			wb+=votes[j].b-((votes[j].a+votes[j].b)/2+1);
			printf("%c %d %d\n", 'B', votes[j].a, votes[j].b-((votes[j].a+votes[j].b)/2+1)); 
		}
	}
	wa=(wa-wb > 0)?	wa-wb:wb-wa;
	printf("%.8lf", (double)wa/v);
}
