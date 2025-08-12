#include <stdio.h>

int main()
{
	int ds, ys, dm, ym;

	scanf("%d %d %d %d", &ds, &ys, &dm, &ym);

	ds=ys-ds;
	dm=ym-dm;

	while(ds != dm)
	{
		if(ds > dm)	dm+=ym;
		else		ds+=ys;
	}

	printf("%d", ds);
}
