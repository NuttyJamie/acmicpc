#include <stdio.h>

int isValid(char n)
{
	if(n == 0 || n == 2 || n == 5)	return 1;
	else							return 0;
}

int main()
{
	char i, j;

	j=getchar()-'0';
	getchar();
	i=getchar()-'0';

	if(isValid(j) & isValid(i))
	{
		j-=i;
		if(!j)	putchar('=');
		else	putchar((j == -2 || j == -3 || j == 5)? '>':'<');
	}
	else if(isValid(j) ^ isValid(i))
		putchar((isValid(j))?	'>':'<');
	else	putchar('=');
}
