#include <stdio.h>

int main()
{
	int sh, sm, eh, em, day;

	while(1)
	{
		day=0;

		scanf("%d:%d %d:%d", &sh, &sm, &eh, &em);

		if(!sh && !sm && !eh && !em)	break;

		sm+=em;
		eh+=(sm/60);
		sm%=60;
		sh+=eh;
		day=sh/24;
		sh%=24;

		printf("%02d:%02d", sh, sm);
		if(day)	printf(" +%d\n", day);
		else	putchar('\n');
	}
}
