#include <stdio.h>

int main()
{
	int a[1000], b[1000];
	int n, i, da, db, flag, overtake;

	while(1)
	{
		scanf("%d", &n);

		if(!n)	break;

		for(i=0; i < n; ++i)	scanf("%d", &a[i]);
		for(i=0; i < n; ++i)	scanf("%d", &b[i]);

		for(i=0; a[i] == b[i]; ++i);
		flag=(a[i] < b[i])?	1:0;

		da=a[0];
		db=b[0];
		overtake=0;

		for(i=1; i < n; ++i)
		{
			da+=a[i];
			db+=b[i];

			if(da == db)				continue;
			else if((da < db) ^ flag)	++overtake, flag^=1;
		}

		printf("%d\n", overtake);
	}
}
