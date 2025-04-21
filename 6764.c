#include <stdio.h>

int main()
{
	int n[4];
	int cur, prev;

	scanf("%d %d %d %d", &n[0], &n[1], &n[2], &n[3]);

	if	   (n[0] < n[1])	prev=1;
	else if(n[0] > n[1])	prev=-1;
	else					prev=0;

	for(int i=1; i < 3; ++i)
	{
		if	   (n[i] < n[i+1])	cur=1;
		else if(n[i] > n[i+1])	cur=-1;
		else					cur=0;

		if(prev != cur)
		{
			puts("No Fish");
			return 0;
		}
	}

	if(!cur)	puts("Fish At Constant Depth");
	else 		puts((cur > 0)?	"Fish Rising":"Fish Diving");
}
