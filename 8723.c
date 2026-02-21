#include <stdio.h>

int main()
{
	int a[3];
	int i, flag=0;

	for(i=0; i < 3; ++i)
		scanf("%d", &a[i]);

	for(i=0; i < 2; ++i)
		for(int j=i+1; j < 3; ++j)
			if(a[i] > a[j])
			{
				a[i]^=a[j];
				a[j]^=a[i];
				a[i]^=a[j];
			}

	if(a[0]*a[0]+a[1]*a[1] == a[2]*a[2])	flag=1;
	else if(a[0] == a[1] && a[0] == a[2])	flag=2;

	printf("%d", flag);
}
