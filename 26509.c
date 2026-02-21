#include <stdio.h>

int main()
{
	int a[3], b[3];
	int n, i, j, flag;

	scanf("%d", &n);

	while(n--)
	{
		flag=1;

		for(i=0; i < 3; ++i)	scanf("%d", &a[i]);
		for(i=0; i < 3; ++i)	scanf("%d", &b[i]);

		for(i=0; i < 2; ++i)
			for(j=i+1; j < 3; ++j)
			{
				if(b[i] > b[j])
				{
					b[i]^=b[j];
					b[j]^=b[i];
					b[i]^=b[j];
				}
				if(a[i] > a[j])
				{
					a[i]^=a[j];
					a[j]^=a[i];
					a[i]^=a[j];
				}
			}

		if(a[0]*a[0]+a[1]*a[1] != a[2]*a[2])	flag=0;
		if(b[0]*b[0]+b[1]*b[1] != b[2]*b[2])	flag=0;
		if((a[0] != b[0]) || (a[1] != b[1]) || (a[2] != b[2]))
			flag=0;

		printf("%s\n", (flag)?	"YES":"NO");
	}
}
