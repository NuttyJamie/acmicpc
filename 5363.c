#include <stdio.h>

int main()
{
	char s[101];
	int i, n;

	scanf("%d ", &n);

	for(i=0; n; --n, i=0)
	{
		do s[i]=getchar(); while(s[i++] != ' ');
		do s[i]=getchar(); while(s[i++] != ' ');
		scanf("%[^\n]", &s[i]);
		printf("%s %.*s\n", &s[i], i, s);
		getchar();
	}
}
