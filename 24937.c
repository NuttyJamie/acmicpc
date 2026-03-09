#include <stdio.h>

int main()
{
	int n;
	char s[11]="SciComLove";

	scanf("%d", &n);

	n%=10;

	printf("%s%.*s", &s[n], n, s);
}
