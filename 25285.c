#include <stdio.h>

int main()
{
	int t, cm, kg;

	scanf("%d", &t);

	while(t--)
	{
		scanf("%d %d", &cm, &kg);
		if(cm < 141)	putchar('6');
		else if(cm > 140 && cm < 146)	putchar('5');
		else if((cm > 145 && cm < 159) || cm > 203)	putchar('4');
		else
		{
			double bmi=cm*cm/10000.0;
			bmi=kg/bmi;
			if(bmi >= 35.0 || bmi < 16.0) putchar('4');
			else if(bmi < 18.5 || bmi >= 30.0 || cm < 161) putchar('3');
			else if(bmi >= 20.0 && bmi < 25) putchar('1');
			else putchar('2');
		}
		putchar('\n');
	}
}
