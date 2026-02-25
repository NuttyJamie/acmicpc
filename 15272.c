#include <stdio.h>

int main()
{
	char s, p;

	p=getchar();

	while((s=getchar()) != '\n')
	{
		if((s == 's') && (p == 's'))
		{
			p=0;
			break;
		}
		p=s;
	}
	puts((!p)?	"hiss":"no hiss");
}
