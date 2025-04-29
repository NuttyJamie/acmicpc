#include <stdio.h>
#include <string.h>

int main()
{
	char a[101], b[101];

	scanf("%s %s", a, b);
	char la=strlen(a);
	char lb=strlen(b);

	if(!strcmp(a, "null"))	
	{
		puts("NullPointerException");
		puts("NullPointerException");
		return 0;
	}
	else if(!strcmp(b, "null"))
	{
		puts("false");
		puts("false");
		return 0;
	}
	puts((strcmp(a, b))?	"false":"true");

	for(int i=0; i < la; ++i)
		if('9' < a[i] && a[i] < 'a')	a[i]+=32;
	for(int i=0; i < lb; ++i)
		if('9' < b[i] && b[i] < 'a')	b[i]+=32;
	puts((strcmp(a, b))?	"false":"true");
}

