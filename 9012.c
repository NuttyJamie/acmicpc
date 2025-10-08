#include <stdio.h>

int main()
{
	int t, stack;
	char buf[51];
	char *c=buf;

	scanf("%d", &t);

	while(t--)
	{
		stack=0;
		scanf("%s", buf);

		for(c=buf; 0 <= stack && *c != '\0'; ++c)
		{
			if(*c == '(')	++stack;
			else			--stack;
		}

		printf("%s\n", (stack == 0)?	"YES":"NO");
	}
}
