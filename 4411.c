#include <stdio.h>
#include <math.h>

int main()
{
	double spent[1000]={0};
	double lowavg, highavg, precise_avg=0, lowsum=0, highsum=0;

	int n, i;

	while(1)
	{
		scanf("%d", &n);

		if(n)
		{
			for(i=0; i < n; ++i)
			{
				scanf("%lf", &spent[i]);

				precise_avg+=spent[i];
			}

			precise_avg/=n;
			precise_avg*=100;
			lowavg=floor(precise_avg);
			highavg=ceil(precise_avg);
			lowavg/=100;
			highavg/=100;

			for(i=0; i < n; ++i)
			{
				if(spent[i] < lowavg)
					lowsum+=lowavg-spent[i];
			}

			for(i=0; i < n; ++i)
			{
				if(spent[i] > highavg)
					highsum+=spent[i]-highavg;
			}
			printf("$%.2lf\n", ((lowsum < highsum)?	highsum:lowsum));
			precise_avg=lowavg=highavg=lowsum=highsum=0;
		}
		else return 0;
	}
}
