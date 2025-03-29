#include <stdio.h>

int main()
{
	int c, w, l, p, d;

	while(1)
	{
		scanf("%d %d %d %d", &c, &w, &l, &p);

		if(!c & !w & !l & !p)	break;

		if(!w || !l || !p)	c=1;
		else
		{
			for(d=c; w > 1; --w)	c*=d;
			for(d=c; l > 1; --l)	c*=d;
			for(d=c; p > 1; --p)	c*=d;
		}
		printf("%d\n", c);
	}
}
