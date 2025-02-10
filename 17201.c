#include <stdio.h>

int main()
{
	char a, b, flag=1;

	scanf("%*d ");
	
	a=getchar()-'0';
	while((b=getchar())	!= '\n')
	{
		b-='0';
		if(a & b)
		{
			flag=0;
			break;
		}
		a=b;
	}
	puts((flag)?	"Yes":"No");
}
