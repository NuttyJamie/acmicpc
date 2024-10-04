#include <stdio.h>

int main()
{
	enum school {N, B, K, S};
	char w;

	scanf("%c", &w);

	switch(w)
	{
		case 'N':
			puts("North London Collegiate School");
			break;
		case 'B':
			puts("Branksome Hall Asia");
			break;
		case 'K':
			puts("Korea International School");
			break;
		case 'S':
			puts("St. Johnsbury Academy");
			break;
	}
}
