#include <stdio.h>

int main()
{
	int n, t, first, last, sum=0, caseord=1;

	while(1)
	{
		int i, j;

		scanf("%d", &n);

		if(!n)	break;

		sum=last=0;

		scanf("%d", &sum);
		
		for(i=1; i < n-1; ++i)
		{
			scanf("%d", &first);
			for(j=1; j < i; ++j)
				scanf("%*d");
			scanf("%d", &last);
			sum+=first+last;
		}
		for(i=0; n != 1 && i < n; ++i)
		{
			scanf("%d", &last);
			sum+=last;
		}
		printf("Case #%d:%d\n", caseord++, sum);
	}
}
