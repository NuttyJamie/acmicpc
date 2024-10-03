#include <stdio.h>

int main()
{
	int i, j, tmp;
	int n[5];

	for(i=4; i >= 0; --i)
		scanf("%d", &n[i]);

	for(j=4; j > 0; --j)
	{
		for(i=0; i < 4; ++i)
		{
			if(n[i] > n[i+1])
			{
				tmp=n[i];
				n[i]=n[i+1];
				n[i+1]=tmp;
			}
		}
	}
	printf("%d\n%d", (n[0]+n[1]+n[2]+n[3]+n[4])/5, n[2]);
}

