#include <stdio.h>

int main()
{
	int t, i, ans, count=0;

	scanf("%d", &t);

	for(i=0; i < 5; ++i)
	{
		scanf("%d", &ans);
		if(ans == t)	++count;
	}

	printf("%d", count);
}
