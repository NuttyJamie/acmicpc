#include <stdio.h>

int main()
{
	char name[20][61];
	char msg[20][19];
	int n, i, j, group=1, flag=0;

	while(1)
	{
		scanf("%d", &n);

		if(!n)	break;

		printf("Group %d\n", group++);
		for(i=0; i < n; ++i)
		{
			scanf("%s ", &name[i]);
			for(j=0; j < n-1; ++j)
			{
				msg[i][j]=getchar();
				getchar();
			}
		}

		for(i=0; i < n; ++i)
		{
			for(int k=i-1, j=0; j < n-1; ++j, --k)
			{
				if(msg[i][j] == 'N')
				{
					printf("%s was nasty about %s\n", name[(k < 0)? n+k:k], name[i]);
					flag=1;
				}
			}
		}
		if(!flag)	puts("Nobody was nasty");
		putchar('\n');
		flag=0;
	}
}
