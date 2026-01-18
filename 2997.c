#include <stdio.h>

int main()
{
	int n[3];
	int d1, d2, i, j;

	for(i=0; i < 3; ++i)	scanf("%d", &n[i]);

	for(i=0; i < 2; ++i)
		for(j=i+1; j < 3; ++j)
		{
			if(n[i] > n[j])
			{
				n[i]^=n[j];
				n[j]^=n[i];
				n[i]^=n[j];
			}
		}

	d1=n[1]-n[0];
	d2=n[2]-n[1];

	if(d1 == d2) 	i=(n[2]+d1 > 100)?	n[0]-d1:n[2]+d1;
	else 			i=(d1 > d2)?		n[0]+d2:n[1]+d1;
	printf("%d", i);
}
