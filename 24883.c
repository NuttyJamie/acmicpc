#include <stdio.h>

int main()
{
	switch(getchar())
	{
		case 'N':
		case 'n':
			puts("Naver D2");
			break;
		default	:
			puts("Naver Whale");
	}
}
