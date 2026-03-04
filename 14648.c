#include <stdio.h>

int main()
{
	long long seq[1001];
	int n, q, op, a, b, c, d, i;

	scanf("%d %d", &n, &q);

	for(i=0; i < n; ++i)
		scanf("%lld", &seq[i]);

	while(q--)
	{
		long long sum=0;

		scanf("%d %d %d", &op, &a, &b);

		if(op & 1)
		{
			seq[a-1]^=seq[b-1];
			seq[b-1]^=seq[a-1];
			seq[a-1]^=seq[b-1];

			while(a <= b)
			{
				sum+=seq[a-1];
				++a;
			}
			printf("%lld\n", sum);
		}
		else
		{
			scanf("%d %d", &c, &d);

			while(a <= b)
			{
				sum+=seq[a-1];
				++a;
			}
			while(c <= d)
			{
				sum-=seq[c-1];
				++c;
			}
			printf("%lld\n", sum);
		}
	}
}
