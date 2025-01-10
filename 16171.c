#include <stdio.h>

int main()
{
	char c;
	char s[101]={0,}, k[101];
	int i=0, j;

	while((c=getchar()) != '\n')
		if(c > '@')	s[i++]=c;
	scanf("%s", k);
	i=0, j=0;
	while(k[j] && s[i+j])
	{
		if(s[i+j] == k[j])	++j;
		else				++i, j=0;
	}
	putchar(!(k[j])?	'1':'0');
}
