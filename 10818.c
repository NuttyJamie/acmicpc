#include <stdio.h>

int main()
{
	int N, i, buf, min=1000000, max=-1000000;

	scanf("%d", &N);

	for(i=0; i<N; ++i)
	{
		scanf("%d", &buf);
		if(buf>max)			max=buf;
		else if(buf<min)	min=buf;
	}
	printf("%d %d", min, max);
}
