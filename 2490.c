#include <stdio.h>

int main()
{
	int y, total;

	for(int i=0; i < 3; ++i)
	{
		total=0;
		for(int j=0; j < 4; ++j)
		{
			scanf("%d", &y);

			total+=y;
		}

		if(total != 4) 	printf("%c\n", 'D'-total);
		else			printf("E\n");
	}
}
