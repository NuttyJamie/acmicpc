#include <stdio.h>

int rev(int n)
{
	int t;

	for(t=0; n; n/=10)
	{
		t*=10;
		t+=n%10;
	}

	return t;
}

int main()
{
	int x, y;

	scanf("%d %d", &x, &y);

	printf("%d", rev(rev(x)+rev(y)));
}
