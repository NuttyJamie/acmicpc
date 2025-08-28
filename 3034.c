#include <stdio.h>

int main()
{
	int n, w, h, l;

	scanf("%d %d %d", &n, &w, &h);

	for(int i=0; i < n; ++i)
	{
		scanf("%d", &l);

		if(l*l <= w*w+h*h)	puts("DA");
		else				puts("NE");
	}
}
