#include <stdio.h>

int main()
{
	int second=-1, last=-1;
	char s[101]={0};
	char *p=s;

	scanf("%s", s);

	for(int i=0; *p != '\0'; ++p, ++i)
	{
		switch(*p)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				second=last;
				last=i;
				break;
		}
	}

	--p;

	switch(*p)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'n':
		case 's':
			printf("%d", (second < 0)?	-1:second+1);
			break;
		default:
			printf("%d", (last < 0)?	-1:last+1);
			break;
	}
}
