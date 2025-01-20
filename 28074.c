#include <stdio.h>

int main()
{
	char s, count=0;

	while((s=getchar()) != '\n')
	{
		switch(s)
		{
			case 'M':
				count |= 0x10;
				break;
			case 'O':
				count |= 0x8;
				break;
			case 'B':
				count |= 0x4;
				break;
			case 'I':
				count |= 0x2;
				break;
			case 'S':
				count |= 0x1;
				break;
		}
	}
	puts((count == 31)?	"YES":"NO");
}
