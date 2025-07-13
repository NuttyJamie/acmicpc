#include <stdio.h>

int main()
{
	char c;

	c=getchar();

	switch(c)
	{
		case 'M':
			puts("MatKor");
			break;
		case 'W':
			puts("WiCys");
			break;
		case 'C':
			puts("CyKor");
			break;
		case 'A':
			puts("AlKor");
			break;
		case '$':
			puts("$clear");
			break;
	}
}
