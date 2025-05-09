#include <stdio.h>

int main()
{
	int own, left;

	while(1)
	{
		int pair=0, is3=0;
		scanf("%d %d", &own, &left);

		if(!own && !left)	break;

		if(own-left > 2)
		{
			is3=(own-left)%2;
			pair=(is3 == 1)?	(own-left-3)/2:(own-left)/2;
		}

		printf("%d %d\n", pair, is3);
	}
}
