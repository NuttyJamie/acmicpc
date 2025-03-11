#include <stdio.h>

int main()
{
	char c;
	int o[27]={0}, s[27]={0};

	while((c=getchar()) != '\n')
	{
		if(c == ' ') 	++o[26];
		else			++o[c-'a'];
	}

	while((c=getchar()) != '\n')
	{
		if(c == ' ') 	++s[26];
		else			++s[c-'a'];
	}

	if(o[26] != s[26])	putchar(' ');
	for(int i=0; i < 26; ++i)
		if(o[i] != s[i])
			putchar(i+'a');
}
