#include <stdio.h>
#define N 100002

int main()
{
	char s[N], t[N];
	char *ps=s, *pt=t;

	while(scanf("%s %s", s, t) != EOF)
	{
		for(ps=s, pt=t; *ps != '\0' && *pt != '\0'; ++pt)
		{
			if(*ps == *pt)	++ps;
		}

		if(*ps == '\0')	puts("Yes");
		else			puts("No");
	}
}
