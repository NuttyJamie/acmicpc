#include <stdio.h>

int main()
{
	int n, v0, vn;

	scanf("%d %d", &n, &v0);

	--n;

	do{scanf("%d", &vn);}
	while(vn <= v0 && --n);

	if(vn > v0)	putchar('N');
	else		putchar('S');
}
