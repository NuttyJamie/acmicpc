#include <stdio.h>

int main()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	a=a+(c/60);
	b=b+(c%60);

	if(b>=60)
	{
		a++;
		b=b%60;
	}
	
	if(a>=24)
	{
		a=a-24;
	}

	printf("%d %d", a, b);
}
