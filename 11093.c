#include <stdio.h>

int main()
{
	int n, m, l, i;
	char msg[10001];

	scanf("%d", &n);

	while(n--)
	{
		scanf("%s", msg);

		for(i=l=0; msg[i]; ++i)	++l;
		for(m=1; m*m < l; ++m);
		for(i=l; i < m; ++i)	msg[i]=0;

		for(i=m*(m-1); i < m*m; ++i)
			for(l=i; l >= 0; l-=m)
				if(msg[l]) 	putchar(msg[l]);
		putchar('\n');
	}
}
