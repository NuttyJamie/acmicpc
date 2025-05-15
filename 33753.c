#include <stdio.h>

int main()
{
	int a, b, c, t;

	scanf("%d %d %d %d", &a, &b, &c, &t);

	if(t > 30)
	{
		t-=30;
		a+=(t/b)*c;
		a=(t%b)?	a+c:a;
	}
	printf("%d", a);
}
