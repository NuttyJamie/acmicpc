#include <stdio.h>

int main()
{
	char a[100001], b[26]={0};
	char *p=a;
	char c;

	scanf("%s ", a);

	while((c=getchar()) != EOF)
	{
		++b[c-'A'];
		getchar();
	}

	while(*p != '\0')
	{
		if(b[*p-'A'] && *p < 'a')	*p+=32;
		++p;
	}
	printf("%s", a);
}
