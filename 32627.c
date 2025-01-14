#include <stdio.h>

int main()
{
	char s[300001]={0};
	int n, m, i, d=0;
	int o[26]={0};

	scanf("%d %d ", &n, &m);

	for(i=0; i < n; ++i)
	{
		s[i]=getchar();
		++o[s[i]-'a'];
	}

	for(i=0; d < m; ++i)	d+=o[i];
	--i;
	d=o[i]-d+m;
	for(n=0; s[n]; ++n)
	{
		if(s[n] < i+'a') continue;
		else if((s[n] == i+'a') && d)
		{
			--d;
			continue;
		}
		else putchar(s[n]);
	}
}
