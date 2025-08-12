#include <stdio.h>

int main()
{
	int a[10];
	int n, k, min=0;

	scanf("%d %d", &n, &k);

	for(int i=0; i < n; ++i) scanf("%d", &a[i]);

	while(k && n--)
	{
		if(k/a[n])
		{
			min+=k/a[n];
			k%=a[n];
		}
	}

	printf("%d", min);
}
