#include <stdio.h>

int main()
{
	int a, b, c, d;

	scanf("%d %d %d %d", &a, &b, &c, &d);

	a+=d/3600;
	d%=3600;
	b+=d/60;
	c+=d%60;

	if(c > 59) {c%=60; ++b;}
	if(b > 59) {a+=b/60; b%=60;}
	if(a > 23) {a%=24;}
	printf("%d %d %d", a, b, c);
}
