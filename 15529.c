#include <stdio.h>

int main()
{
	int a[1000];
	int n, i, j, product, max=-1;

	scanf("%d", &n);

	for(i=0; i < n; ++i)	scanf("%d", &a[i]);

	for(i=0; i < n-1; ++i)
		for(j=i+1; j < n; ++j)
		{
			product=a[i]*a[j];
			int tmp=product, d=product%10;
			while((tmp%10 == d) && (tmp > 0 && d > 0))
			{
				tmp/=10;
				--d;
			}
			if(tmp != 0)	continue;
			else			max=(max == -1 || (max < product))?	product:max;
		}

	printf("%d", max);
}
