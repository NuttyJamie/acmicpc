#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, sum=0;
	char orgstr[101];
	char bufstr[2];

	scanf("%d", &N);
	scanf("%s", orgstr);
	bufstr[1]='\0';

	for(N; N>=0; --N)
	{
		bufstr[0]=orgstr[N-1];
		sum+=atoi(bufstr);
	}
	printf("%d", sum);
}
