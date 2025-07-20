#include <stdio.h>

int main()
{
	int t, x1, y1, x2, y2, n, cx, cy, r;

	scanf("%d", &t);

	while(t--)
	{
		int count=0;

		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

		scanf("%d", &n);

		while(n--)
		{
			scanf("%d %d %d", &cx, &cy, &r);

			if(
				(((cx-x1)*(cx-x1)+(cy-y1)*(cy-y1) < r*r) &&
				 ((cx-x2)*(cx-x2)+(cy-y2)*(cy-y2) > r*r))
				|| 
				(((cx-x2)*(cx-x2)+(cy-y2)*(cy-y2) < r*r) &&
				 ((cx-x1)*(cx-x1)+(cy-y1)*(cy-y1) > r*r))
			  ) ++count;
		}

		printf("%d\n", count);
	}
}
