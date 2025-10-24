#include <stdio.h>

int main()
{
	int happy=0, sad=0, face=0;
	char c;

	while((c=getchar()) != '\n')
	{
		if((!face && c == ':') || (face == 1 && c == '-')) ++face;
		else if(face == 2)
		{
			if(c == ')')		++happy;
			else if(c == '(')	++sad;
		}
		else	face=0;
	}

	if(!happy && !sad)		puts("none");
	else if(happy == sad)	puts("unsure");
	else					puts((happy > sad)?	"happy":"sad");
}
