#include <stdio.h>

int honeynum(int n)
{
	if(n==1) return n;
	return (n-1)*6+honeynum(n-1);
}
	
int main()
{
	int N, i;
	
	scanf("%d", &N);

	for(i=1; ; ++i)
	{
		if(honeynum(i)>=N)	
		{
			printf("%d", i);
			break;
		}
	}
}
