#include <stdio.h>

int main()
{
	int d, x, n=0;
	char isbn[14];

	scanf("%s", isbn);

	for(int i=0; i < 12; ++i)
	{
		if(isbn[i] == '*') 	d=(i & 1)?	3:1;
		else 				n+=(isbn[i]-'0')*((i & 1)?	3:1);
	}

	if(isbn[12] != '0')
	{
		for(x=0; x < 10; ++x)
			if(10-isbn[12]+'0' == (n+d*x)%10)	break;
	}
	else
	{
		for(x=0; x < 10; ++x)
			if(0 == (n+d*x)%10)	break;
	}

	printf("%d", x);
}
