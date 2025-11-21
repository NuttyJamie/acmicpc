#include <stdio.h>

int main()
{
	int l, w, h, v;

	while(1)
	{
		scanf("%d %d %d %d", &l, &w, &h, &v);

		if(!(l|w|h|v))	break;

		if(v)	
		{
			if(!l)		l=v/(w*h);
			else if(!w)	w=v/(l*h);
			else		h=v/(l*w);
		}
		else if(l|w|h)	v=l*w*h;

		printf("%d %d %d %d\n", l, w, h, v);
	}
}
