#include <stdio.h>

int main()
{
	double spd, w, str;
	int flag=0;

	while(1)
	{
		scanf("%lf %lf %lf", &spd, &w, &str);

		if(!spd && !w && !str)	break;
		else if(spd <= 4.5 && w >= 150 && str >= 200)	flag=1, printf("Wide Receiver ");
		if(spd <= 6.0 && w >= 300 && str >= 500)		flag=1, printf("Lineman ");
		if(spd <= 5.0 && w >= 200 && str >= 300)		flag=1, printf("Quarterback");
		if(!flag)	printf("No positions");
		putchar('\n');
		flag=0;
	}
}
