#include <stdio.h>

int main()
{
	char c, flag=0, gflag=0;
	int l=1;

	while((c=getchar()) != EOF)
	{
		if(c == '\n')	++l;
		if(c == 'F')	flag=1;
		else if(c == 'B' && flag)		flag=2;
		else if(c == 'I' && flag == 2)
		{
			printf("%d ", l);
			while(getchar() != '\n');
			++l;
			++gflag;
		}
		else							flag=0;
	}
	if(!gflag)	puts("HE GOT AWAY!");
}
