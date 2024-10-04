#include <stdio.h>
#include <string.h>

char*	camel	(char *string, int size)
{
	int i;
	if(string[0] < 'a')	string[0]+=32;
	for(i=1; i < size; ++i)
	{
		if(string[i] == '_')
		{
			memmove(&string[i], &string[i+1], size-i);
			string[i]-=32;
		}
	}
	return string;
}

char*	snake	(char *string, int size)
{
	int i;
	if(string[0] < 'a')	string[0]+=32;
	for(i=1; i < size; ++i)
	{
		if(string[i] <= 'Z' && string[i] >= 'A')
		{
			string[i]+=32;
			memmove(&string[i+1], &string[i], size++);
			string[i]='_';
		}
	}
	return string;
}

char*	pascal	(char *string, int size)
{
	int i;
	if(string[0] > 'Z')	string[0]-=32;
	for(i=1; i < size; ++i)
	{
		if(string[i] == '_')
		{
			memmove(&string[i], &string[i+1], size-i);
			string[i]-=32;
		}
	}
	return string;
}

int main()
{
	char string[201];

	scanf("%*d %s", string);

	puts(camel(string, strlen(string)));
	puts(snake(string, strlen(string)));
	puts(pascal(string, strlen(string)));
}
