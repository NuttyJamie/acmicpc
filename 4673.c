#include <stdio.h>

int dn(int n)
{
	int sum=n;

	while(n!=0)
	{
		sum+=n%10;
		n=n/10;
	}
	return sum;
}

int main()
{
	int i;
	int arr[10001]={0,};

	for(i=1; i<10001; ++i)
	{
		if(dn(i)>10000)	continue;
		arr[dn(i)]=1;
	}

	for(i=1; i<10001; ++i)
	{
		if(arr[i]==0)
			printf("%d\n", i);
	}
}
//	printf("%d\n", dn(arr[0]));


