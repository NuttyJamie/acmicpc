#include <stdio.h>
#define _r 31
#define _M 1234567891

int main()
{
	char w;
	int l, i, j;
	unsigned long long t=1, sum=0;
	
	scanf("%d", &l);

	for(i=0; i < l; ++i)
	{
		scanf(" %c", &w);

		w-=96;
		sum=(sum+(w*t)%_M) % _M;
		t=(t*_r)%_M;
	}

	printf("%lld", sum);
}
