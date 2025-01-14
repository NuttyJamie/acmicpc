#include <stdio.h>

int main()
{
	char s=0;
	char o[100]={0};
	int n, m, i=0;

	scanf("%d %d ", &n, &m);
	while(i < n)	o[i++]=getchar();
	getchar();
	while(m--)
	{
		i=0;
		while(i < n && (s=getchar()) != '\n')
			if(s == o[i])	++i;
		while(s != '\n')	s=getchar();
		puts((i > n-1)? "true":"false");
	}
}
