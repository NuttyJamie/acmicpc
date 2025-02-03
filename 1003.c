#include <stdio.h>

int main()
{
	int seq[42]={1};
	int i, n, t;

	scanf("%d", &t);

	seq[1]=0;
	for(i=2; i < 42; ++i)
		seq[i]=seq[i-1]+seq[i-2];

	while(t--)
	{
		scanf("%d", &n);
		printf("%d %d\n", seq[n], seq[n+1]);
	}
}
