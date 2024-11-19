#include <stdio.h>

int main()
{
	char s[300000];
	int n, m, i=0;
	int o[26]={0};

	scanf("%d %d ", &n, &m);

	while(n--)
	{
		s[i]=getchar();
		++o[s[i]-'a'];
		++i;
	}
	for(n=0; m; ++n)
	{
		if(o[n])
		{
			int x=(o[n] > m)?	m:o[n];
			o[n]-=x;
			m-=x;
		}
	}
	for(n=0; n < i; ++n)
	{
		m=s[n]-'a';
		//printf("o[%d] is: %d\n", m, o[m]);
		if(o[m])
		{
			putchar(s[n]);
			--o[m];
		}
	}
}
