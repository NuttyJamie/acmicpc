#include <stdio.h>

int minlength(char s[], int l)
{
	int i, j, t, min=0, flag=0;

	for(t=6; t <= l; ++t)
	{
		for(i=0; i < l-t+1; ++i)
		{
			for(j=i; j < i+t; ++j)
			{
				if(!(s[j] ^ 3))
					flag|=4;
				else if(!(s[j] ^ 6) || !(s[j] ^ 7))
					flag|=2;
				else if(!(s[j] ^ 4) || !(s[j] ^ 5))
					flag|=1;
			}
			if(flag == 7)
				return j-i;
			flag=0;
		}
	}

	return 0;
}

int main()
{
	int n, l, i, min;
	char s[201];

	scanf("%d", &n);

	for(i=l=0; n; --n, i=l=0)
	{
		scanf("%s", s);

		while(s[i++])	++l;

		for(i=0; i < l; ++i)	s[i]>>=4;

		min=minlength(s, l);

		printf("%d\n", min);
	}
}
