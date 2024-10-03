#include <stdio.h>

int main()
{
	char name[11];
	int age, weight;

	while(1)
	{
		scanf("%s %d %d", name, &age, &weight);
		if(!age)	break;
		printf("%s ", name);
		if(age > 17 || weight >= 80) 	puts("Senior");
		else							puts("Junior");
	}
}
