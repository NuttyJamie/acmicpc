#include <stdio.h>

int main()
{
	int t, a, b, c;

	scanf("%d", &t);

	for(int i=1; i <= t; ++i)
	{
		scanf("%d %d %d", &a, &b, &c);
		printf("Case #%d: %s\n", i, 
				((a+b <= c) || (a+c <= b) || (b+c <= a))?	"invalid!":
				((a == b) && (b == c))?						"equilateral":
				((a == b) || (b == c))?						"isosceles":
				"scalene");
	}
}

