#include <stdio.h>

int main()
{
	int a, leaf, factor, count;

	while(1)
	{
		scanf("%d", &a);

		if(!a)	break;

		leaf=1;

		while(a--)
		{
			scanf("%d %d", &factor, &count);

			leaf*=factor;
			leaf-=count;
		}
		printf("%d\n", leaf);
	}
}
