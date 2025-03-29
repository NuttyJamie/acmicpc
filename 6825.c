#include <stdio.h>

int main()
{
	double weight, height;

	scanf("%lf %lf", &weight, &height);
	height*=height;
	weight/=height;
	if(weight > 25)		puts("Overweight");
	else if(weight < 18.5)	puts("Underweight");
	else			puts("Normal weight");
}
