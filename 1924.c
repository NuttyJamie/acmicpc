#include <stdio.h>

int main()
{
	char day[7][4]={"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
	int x, y;

	scanf("%d %d", &x, &y);
	while(--x)
	{
		if(x == 2)	y+=28;
		else if((x < 8 && x%2) || (x > 7 && !(x%2)))	y+=31;
		else y+=30;
	}
	printf("%s\n", day[y%7]);
}
