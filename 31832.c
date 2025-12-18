#include <stdio.h>

int main()
{
	int n, i, upper, lower, letter;
	char s[21];

	scanf("%d", &n);
	
	while(n--)
	{
		upper=lower=letter=0;

		scanf("%s", s);

		for(i=0; s[i]; ++i)
		{
			if(!('0' <= s[i] && s[i] <= '9'))	letter=1;
			if('A' <= s[i] && s[i] <= 'Z')		++upper;
			if('a' <= s[i] && s[i] <= 'z')		++lower;
		}
		
		if(i < 11 && upper <= lower && letter)
		{
			printf("%s", s);
			break;
		}
	}
}

