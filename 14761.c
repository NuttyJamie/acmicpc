#include <stdio.h>

int main()
{
	int i, n, x, y;

	scanf("%d %d %d", &x, &y, &n);

	for(i=1; i <= n; ++i)
	{
		if(!(i%x) && !(i%y))	puts("FizzBuzz");
		else if(!(i%x)) 		puts("Fizz");
		else if(!(i%y)) 		puts("Buzz");
		else 					printf("%d\n", i);
	}
}
