#include <stdio.h>

int main()
{
	int N, i, j, bonus=0, sum=0;
	char ox[80];

	scanf("%d", &N);

	for(i=0; i<N; ++i)
	{
		bonus=0;
		sum=0;
		scanf("%s", ox);
		for(j=0; j<80; ++j)
		{
			if(ox[j]=='\0')	break;
			else if(ox[j]=='O')
			{
				bonus+=1;
				sum+=bonus;
			}
			else bonus=0;
		}
		printf("%d\n", sum);
	}
}
