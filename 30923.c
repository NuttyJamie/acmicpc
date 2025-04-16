#include <stdio.h>

int main()
{
	long long n, h, prev=0, s=0;

	scanf("%lld %lld", &n, &h);

	s+=(n<<1);
	s+=(h<<2);
	prev=h;
	for(int i=1; i < n; ++i)
	{
		scanf("%lld", &h);

		s+=(h<<2);
		s-=(h < prev)?	h<<1:prev<<1;
		prev=h;
	}
	printf("%lld", s);
}
