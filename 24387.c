#include <stdio.h>

int main()
{
	int t;
	int a[3], b[3];

	scanf("%d %d %d %d %d %d", &a[0], &a[1], &a[2], &b[0], &b[1], &b[2]);

	for(int j=2; j; --j)
		for(int i=0; i < j; ++i)
		{
			if(a[i] < a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
			if(b[i] < b[i+1])
			{
				t=b[i];
				b[i]=b[i+1];
				b[i+1]=t;
			}
		}
	printf("%lld", (long long)a[0]*b[0]
					+(long long)a[1]*b[1]
					+(long long)a[2]*b[2]);
}
