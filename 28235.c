#include <stdio.h>

int main()
{
	char c;

	c=getchar();

	switch(c)
	{
		case 'S':
			puts("HIGHSCHOOL");
			break;
		case 'C':
			puts("MASTER");
			break;
		case '2':
			puts("0611");
			break;
		case 'A':
			puts("CONTEST");
			break;
	}
}
