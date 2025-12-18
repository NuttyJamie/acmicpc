#include <stdio.h>

int main()
{
	int n, m, i, j, len, diff, count;
	char ch_n[5];

	while(scanf("%d %d", &n, &m) != EOF)
	{
		count=0;

		for(m=m-n+1; m; --m, ++n)
		{
			diff=1;
			for(int t=n, i=len=0; t; t/=10, ++i, ++len)	ch_n[i]=t%10+'0';

			for(i=0; i < len-1 && diff; ++i)
				for(j=i+1; j < len && diff; ++j)
					diff=ch_n[i]^ch_n[j];
			if(diff)	++count;
		}
		printf("%d\n", count);
	}
}
