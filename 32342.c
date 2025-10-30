#include <stdio.h>

int main()
{
	int q, i, l, count=0;
	char s[1001];

	scanf("%d", &q);

	while(q--)
	{
		scanf("%s", s);

		for(i=l=0; s[i]; ++i) ++l;
		for(i=0; i < l-2; ++i)
		{
			if((s[i] == 'W') && (s[i+1] == 'O') && (s[i+2] == 'W'))
				++count;
		}

		printf("%d\n", count);
		count=0;
	}
}
