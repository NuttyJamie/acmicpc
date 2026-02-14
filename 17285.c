#include <stdio.h>

int main()
{
	char t[101];
	char k;

	scanf("%s", t);

	k=t[0]^'C';

	for(int i=0; t[i]; ++i)
		putchar(t[i]^k);
}
