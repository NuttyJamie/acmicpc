#include <stdio.h>

int main()
{
	int a, b, c;
	int arr[10]={0,};

	scanf("%d%d%d", &a, &b, &c);
	a=a*b*c;
	b=100000000;

	while(b>=1)
	{
		if(a%b==a)	
		{
			b/=10;
			continue;
		}
		++arr[(a/b)%10];
		b/=10;
	}
	for(c=0; c<10; ++c)
	{
		printf("%d\n", arr[c]);
	}
}

