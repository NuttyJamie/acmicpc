#include <stdio.h>

int main()
{
	char s[9];
	int n, i=3;

	while(i--)
	{
		scanf("%s", s);
		if(s[0] < 'A')
		{
			sscanf(s, "%d", &n);
			n+=i+1;
		}
	}
	if(n%3 == 0 && n%5 == 0)	puts("FizzBuzz");
	else if(n%3 == 0)			puts("Fizz");	
	else if(n%5 == 0)			puts("Buzz");
	else						printf("%d", n);
}
