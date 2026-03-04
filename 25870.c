#include <stdio.h>

int main()
{
	int alp[26];
	int i, odd=0, even=0;
	char s[71];

	for(i=0; i < 26; ++i)	alp[i]=0;

	scanf("%s", s);

	for(i=0; s[i]; ++i)	++alp[s[i]-'a'];
	for(i=0; i < 26; ++i)
	{
		if(alp[i] & 1)	odd=1;
		else if(alp[i]) even=1;
	}

	if(odd && even)	putchar('2');
	else if(odd)	putchar('1');
	else			putchar('0');
}
