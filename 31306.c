#include <stdio.h>

int main()
{
	char c, aeiou=0, y=0;

	while((c=getchar()) != '\n')
	{
		switch(c)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				++aeiou;
				break;
			case 'y':
				++y;
				break;
		}
	}
	printf("%d %d", aeiou, aeiou+y);
}
