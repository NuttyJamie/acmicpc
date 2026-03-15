#include <stdio.h>

int main()
{
	double avg=0, ev=0;
	int p[100];
	int n, i, t;

	for(i=0; i < 100; ++i) p[i]=0;

	scanf("%d", &n);

	if(!n)	puts("divide by zero");
	else
	{
		for(i=0; i < n; ++i)
		{
			scanf("%d", &t);
			avg+=t;
			++p[t-1];
		}

		avg/=(double)n;

		for(i=0; i < 100; ++i)
			if(p[i]) ev+=(i+1)*(p[i]/(double)n);

		if(ev) 	printf("%.2lf", avg/ev);
		else	puts("divide by zero");
	}
}
