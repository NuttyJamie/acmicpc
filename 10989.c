#include <stdio.h>

int main()
{
	int i, n;
	int t[10000]={0};
	
	scanf("%d", &n);

	while(n--)
	{
		scanf("%d", &i);
		t[i-1]++;
	}

	for(i=0; i < 10000; ++i)
		while(t[i]--)
			printf("%d\n", i+1);
}

