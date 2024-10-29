#include <stdio.h>

int main()
{
	char x[500]={0};
	int i;

	while(1)
	{
		for(i=0; ; ++i)
		{
			x[i]=getchar();
			if(x[i] == '\n')	break;
		}
		if(x[0] == 'E' && x[1] == 'N' && x[2] == 'D')
			break;
		while(i)
			putchar(x[--i]);
		putchar('\n');
	}
}
