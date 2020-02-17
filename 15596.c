#include <stdio.h>

long long sum(int *a, int n)
{
	long long ans=0;

	for(--n; n>=0; --n)
	{
		ans+=a[n];
	}
	return ans;
}

int main()
{
	int i, arr[5];

	for(i=0; i<5; ++i)
	{
		scanf("%d", &arr[i]);
	}
	printf("%d\n", sum(arr, 3));
}
