#include <stdio.h>

int main()
{
	int n, i;

	for(i=0; i < 8; ++i)
	{
		n=getchar();
		getchar();
		if(n == '9')
		{
			putchar('F');
			return 0;
		}
	}
	putchar('S');
}

