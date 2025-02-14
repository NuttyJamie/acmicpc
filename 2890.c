#include <stdio.h>
#include <unistd.h>

int main()
{
	struct team
	{
		int dist;
		int rank;
	};
	struct team team[9];
	char map[2550];
	char *p=map;
	int c, i, j, k;

	setbuf(stdin, NULL);
	scanf("%*d %d", &c);
	ssize_t l=read(0, map, sizeof(map));
	map[l-1]='\n';
	while(p < map+l)
	{
		int d=0;
		while( !('0' <= *p && *p <= '9') && (*p != '\n'))
		{
			++p;
			++d;
		}
		if(*p != '\n')	team[*p-'1'].dist=d;
		while(*p++ != '\n');
	}

	for(int rank=1, flag=0, i=9, j=c-4; i; --j)
	{
		for(k=0; k < 9; ++k)
		{
			if(team[k].dist == j)
			{
				--i;
				flag=1;
				team[k].rank=rank;
			}
		}
		if(flag)	++rank, flag=0;
	}

	for(i=0; i < 9; ++i) printf("%d\n", team[i].rank);
}
