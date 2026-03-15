#include <stdio.h>

int main()
{
	int n, i, s=0, t=0;
	char st[101];

	scanf("%d %s", &n, st);

	for(i=0; i < n; ++i)
	{
		if(st[i] & 1)	++s;
		else			++t;
	}

	for(i=0; s != t; ++i)
	{
		if(st[i] & 1)	--s;
		else			--t;
	}

	printf("%s", &st[i]);
}
