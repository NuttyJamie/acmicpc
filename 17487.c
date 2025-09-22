#include <stdio.h>

int main()
{
	int left=0, right=0, shift=0;
	char s[102];
	char *c=s;
	
	fgets(s, 102, stdin);

	while(*c != '\n')
	{
		if(*c < 'a' && *c != ' ')
		{
			*c+=32;
			shift=1;
		}
		else shift=0;

		switch(*c)
		{
			case 'q':
			case 'w':
			case 'e':
			case 'r':
			case 't':
			case 'y':
			case 'a':
			case 's':
			case 'd':
			case 'f':
			case 'g':
			case 'z':
			case 'x':
			case 'c':
			case 'v':
			case 'b':
				++left;
				break;
			case ' ':
				if(left <= right)	++left;
				else				++right;
				break;
			default:
				++right;
				break;
		}
		if(shift)
		{
			if(left <= right)	++left;
			else				++right;
		}
		++c;
	}

	printf("%d %d", left, right);
}
