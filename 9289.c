#include <stdio.h>
#include <string.h>

int main()
{
	int t, i, j, k;
	char morse[26][5]=
	{
		".-", "-...", "-.-.", "-..", ".",
		"..-.", "--.", "....", "..", ".---",
		"-.-", ".-..", "--", "-.", "---",
		".--.", "--.-", ".-.", "...", "-",
		"..-", "...-", ".--", "-..-", "-.--",
		"--.."
	};
	char s[6];

	scanf("%d", &t);

	for(i=0; i < t; ++i)
	{
		printf("Case %d: ", i+1);
		for(j=0; j < 5; ++j)
		{
			scanf("%s", s);
			for(k=0; k < 26; ++k)
				if(!strcmp(s, morse[k]))
					break;
			putchar(k+'A');
		}
		putchar('\n');
	}
}
