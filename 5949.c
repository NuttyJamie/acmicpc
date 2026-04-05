#include <stdio.h>

int main()
{
	int d, i, l;
	char n[11];

	scanf("%s", n);

	for(l=0; n[l]; ++l);

	for(d=3; d < l; d+=3);
	d-=3;

	for(i=0; n[i]; ++i)
	{
		putchar(n[i]);
		--l;
		if(d && (l == d))
		{
			putchar(',');
			d-=3;
		}
	}
}
