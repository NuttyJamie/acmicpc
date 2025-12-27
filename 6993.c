#include <stdio.h>

int main()
{
	int t, n;
	char w[51];
	char *c=w;

	scanf("%d", &t);

	while(t--)
	{
		char *p=c;
		scanf("%s %d", w, &n);

		printf("Shifting %s by %d positions gives us: ", w, n);
		for(c=w; *c; ++c);
		c-=n;
		p=c;
		while(*c)
			putchar(*c++);
		for(c=w; c != p; ++c)
			putchar(*c);
		putchar('\n');
	}
}
