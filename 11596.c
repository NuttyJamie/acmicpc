#include <stdio.h>

int main()
{
	int a[3], b[3];
	int i, j, flag=1;

	for(i=0; i < 3; ++i) scanf("%d", &a[i]);
	for(i=0; i < 3; ++i) scanf("%d", &b[i]);
	
	for(i=0; i < 2; ++i)
	{
		for(j=1; j < 3; ++j)
		{
			if(a[i] > a[j])
			{
				a[i]^=a[j];
				a[j]^=a[i];
				a[i]^=a[j];
			}
			if(b[i] > b[j])
			{
				b[i]^=b[j];
				b[j]^=b[i];
				b[i]^=b[j];
			}
		}
	}

	flag=((a[0]*a[0]+a[1]*a[1] == a[2]*a[2]) &&
		  (b[0]*b[0]+b[1]*b[1] == b[2]*b[2]) &&
		  (a[0] == b[0]) &&
		  (a[2] == b[2]))?  1:0;

	puts(flag?	"YES":"NO");
}
