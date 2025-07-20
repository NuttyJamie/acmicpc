#include <stdio.h>

int main()
{
	int n, v, inval, score=0;

	scanf("%d", &n);

	inval=n;

	for(int i=0; i < n; ++i)
	{
		scanf("%d", &v);

		if(!v)	--inval;
		else	score+=v;
	}

	if(inval <= n/2)	puts("INVALID");
	else if(score > 0)	puts("APPROVED");
	else				puts("REJECTED");
}
