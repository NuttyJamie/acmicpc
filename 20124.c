#include <stdio.h>

int main()
{
	char a[11], winner[11];
	int i, n, b, winscore=0;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%s %d", a, &b);
		if(winscore < b)
		{
			winscore=b;
			for(i=0; i < 11; ++i) winner[i]=a[i];
		}
		else if(winscore == b)
		{
			for(i=0; i < 11; ++i)
			{
				if(winner[i] < a[i]) break;
				else if(winner[i] > a[i])
				{
					for(i=0; i < 11; ++i) winner[i]=a[i];
					break;
				}
			}
		}
	}
	puts(winner);
}
