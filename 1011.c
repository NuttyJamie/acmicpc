#include <stdio.h>

int main()
{
	unsigned int T, x, y, t, i, count;

	scanf("%d", &T);

	for(t=0; t<T; ++t)
	{
		scanf("%d%d", &x, &y);

		for(i=1, count=0; x<y; ++i)
		{
			x+=i;
			++count;
			if(x>=y)	break;
			else		
			{
				x+=i;
				++count;
			}
		}
		printf("%d\n", count);
	}
}
