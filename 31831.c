#include <stdio.h>

int main()
{
	int n, m, i, stress=0, day=0;

	scanf("%d %d", &n, &m);

	while(n > 0)
	{
		scanf("%d", &i);
		stress+=i;
		if(stress < 0)	stress=0;
		if(stress >= m)	day++;
		--n;
	}
	printf("%d", day);
}
