#include <stdio.h>

int main()
{
	int i, flag;
	char stack[100]={0};
	char c;

	while(1)
	{
		if((c=getchar()) == '.')	break;

		flag=1;
		i=0;

		do
		{
			switch(c)
			{
				case '[':
				case '(':
					stack[i++]=c;
					break;
				case ']':
				case ')':
					if(!i)	flag=0;
					--i;
					if((c == ']' && stack[i] != '[') ||
					   (c == ')' && stack[i] != '('))
						flag=0;
			}
		}while((c=getchar()) != '.');

		getchar();

		printf("%s\n", (flag && !i)?	"yes":"no");
	}
}
