#include <stdio.h>

int main()
{
	char s, buf;
	int sum=0;

	for(; (s=getchar()) != '\n'; sum=0)
	{
		buf=s;
		while(s)
		{
			sum+=s%10;
			s/=10;
		}
		while(sum--)	putchar(buf);
		putchar('\n');
	}
}
