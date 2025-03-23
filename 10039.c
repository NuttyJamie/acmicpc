#include <stdio.h>

int main()
{
	int i, score, avg=0;

	for(i=0; i < 5; ++i)
	{
		scanf("%d", &score);
		avg+=(score < 40)?	40:score;
	}
	printf("%d", avg/5);
}
