#include <stdio.h>

int main()
{
	char alphabet[26]={0};
	char c;
	int n;

	scanf("%d ", &n);

	while(n--)
	{
		c=getchar()-'a';
		++alphabet[c];
		while((c != EOF) && (c=getchar()) != '\n');
	}
	for(c=0; n < 26; ++n)
	{
		if(alphabet[n] > 4)
		{
			c=1;
			putchar('a'+n);
		}
	}
	if(!c)	puts("PREDAJA");
}
