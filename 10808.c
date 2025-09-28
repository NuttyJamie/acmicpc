#include <stdio.h>

int main()
{
	int alp[26]={0};
	char s;

	while((s=getchar()) != '\n')
		++alp[s-'a'];

	for(int i=0; i < 26; ++i)
		printf("%d ", alp[i]);
}
