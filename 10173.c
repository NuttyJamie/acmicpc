#include <stdio.h>

int main()
{
	char nemo[]="NEMO";
	char eoi[]="EOI";
	char c;
	char *p=nemo, *q=eoi;

	while((c=getchar()))
	{
		if(c == '\n' && !(*q))	break;
		else if(c == '\n' && *p)
			puts("Missing");
		p=(c == *p || c-32 == *p)?	++p:nemo;
		q=(c == *q)?	++q:eoi;
		if(!(*p))
		{
			puts("Found");
			while(getchar() != '\n');
			p=nemo;
			q=eoi;
		}
	}
}
