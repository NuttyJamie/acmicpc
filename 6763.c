#include <stdio.h>

int main()
{
	int limit, record, fine;

	scanf("%d %d", &limit, &record);

	if(limit < record)
	{
		if(record-limit > 30) 		fine=500;
		else if(record-limit > 20)	fine=270;
		else						fine=100;
		printf("You are speeding and your fine is $%d.", fine);
	}
	else	puts("Congratulations, you are within the speed limit!");
}
