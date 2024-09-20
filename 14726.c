#include <stdio.h>

int main()
{
	char buf;
	int n, t, i, sum=0, flag=0;

	scanf("%d", &t);

	while(t--)
	{
		getchar();
		for(i=0; i < 16; ++i)
		{
			buf=getchar()-48;

			if(!flag) buf=(buf*2 > 9)?	(buf*2%10)+1 : buf*2;
			sum+=buf;
			flag=(flag)?	0:1;
		}
		if(sum%10)	putchar('F');
		else		putchar('T');
		putchar('\n');
		sum=0;
	}
}

