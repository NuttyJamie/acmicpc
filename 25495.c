#include <stdio.h>

int main()
{
	int sum=0, a_last=0;
	int n, t, a_current;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d", &a_current);
		t=(a_last == a_current)?	t*2:2;
		sum+=t;
		a_last=a_current;
		if(sum >= 100)
		{
			sum=0;
			a_last=0;
		}
	}
	printf("%d", sum);
}
