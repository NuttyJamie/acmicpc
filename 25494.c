#include <stdio.h>

int main()
{
	int t, a, b, c, x, y, z, count=0;

	scanf("%d", &t);

	while(t--)
	{
		scanf("%d %d %d", &a, &b, &c);

		for(x=1; a-x >= 0; ++x)
			for(y=1; b-y >= 0; ++y)
				for(z=1; c-z >= 0; ++z)
					if((x%y == y%z) && (x%y == z%x))	++count;
		printf("%d\n", count);
		count=0;
	}

}
