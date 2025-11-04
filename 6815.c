#include <stdio.h>

int main()
{
	int a, b, d, q, count=0;

	scanf("%d %d", &a, &b);

	for(d=1; d*d < a; ++d);
	for(q=1; q*q*q < a; ++q);

	while((d*d <= b) && (q*q*q <= b))
	{
		if(d*d == q*q*q)		++count, ++q;
		else if(d*d < q*q*q)	++d;
		else					++q;
	}

	printf("%d", count);
}
