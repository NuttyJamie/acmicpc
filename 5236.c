#include <stdio.h>

int main()
{
	int n, i;
	char s[101];

	scanf("%d", &n);

	while(n--)
	{
		scanf("%s", s);

		for(i=0; s[i]; ++i);

		while(i > 0 && s[i] < s[i-1]) --i;

		printf("The longest decreasing suffix of %s is %s\n", s, &s[i]);
	}
}
