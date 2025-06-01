#include <stdio.h>

int main()
{
	int n, length=0;

	while(1)
	{
		scanf("%d", &n);
		if(!n)	break;
		length=1;

		for(int d; n; n/=10, ++length)
		{
			d=n%10;
			switch(d)
			{
				case 1	:
					length+=2;
					break;
				case 0	:
					length+=4;
					break;
				default :
					length+=3;
					break;
			}
		}
		printf("%d\n", length);
	}
}
