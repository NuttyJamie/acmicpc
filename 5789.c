#include <stdio.h>

int main()
{
	int n, l;
	char s[999];

	scanf("%d", &n);

	while(n--)
	{
		l=0;

		scanf("%s", s);

		while(s[l])	++l;
		l>>=1;

		puts((s[l] ^ s[l-1])?	"Do-it-Not":"Do-it");
	}
}
