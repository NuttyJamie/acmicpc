#include <stdio.h>

int main()
{
	int T, x1, y1, r1, x2, y2, r2, dxy, dr;	

	scanf("%d", &T);

	for(T; T>0; --T)
	{
		scanf("%d%d%d%d%d%d", &x1, &y1, &r1, &x2, &y2, &r2);

		dxy=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);

		if(x1==x2 && y1==y2 && r1==r2)	puts("-1");

		else if(dxy<r1*r1 || dxy<r2*r2)
		{
			dr=(r1-r2)*(r1-r2);
			if(dr>dxy)			puts("0");
			else if(dr==dxy)	puts("1");
			else				puts("2");
		}
		else
		{
			dr=(r1+r2)*(r1+r2);
			if(dr>dxy)			puts("2");
			else if(dr==dxy)	puts("1");
			else				puts("0");
		}
	}
}
