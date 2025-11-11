#include <stdio.h>
#include <string.h>

int main()
{
	int n, dif, min=5;
	char title[11], easist[11];

	scanf("%d", &n);

	while(n--)
	{
		scanf("%s %d", title, &dif);

		if(dif < min)
		{
			min=dif;
			strncpy(easist, title, 11);
		}
	}

	printf("%s", easist);
}
