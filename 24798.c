#include <stdio.h>

int main()
{
	int l, w;

	scanf("%d %d", &l, &w);

	if((l <= w) && (w <= 26*l))
	{
		w-=l;
		while(w >= 26)
		{
			putchar('z');
			w-=25;
			--l;
		}
		putchar('a'+w%26);
		while(--l)
			putchar('a');
	}
	else	puts("impossible");
}
