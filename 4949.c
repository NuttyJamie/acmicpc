#include <stdio.h>

int main()
{
	char buf[101]={0};
	char c, l=0, i=0, flag=0;

	while((c=getchar()) != EOF)
	{
		switch(c)
		{
			case '(':
			case '[':
				buf[i++]=c;
				break;
			case ')':
			case ']':
				if(!i)
				{
					puts("no");
					while(getchar() != '.');
				}
				else if((buf[i-1] == '(') && (c == ')')
						||
						(buf[i-1] == '[') && (c == ']'))
					buf[i]=0;
				else
				{
					puts("no");
					while(getchar() != '.');
					for(i; i >= 0; --i)	buf[i]=0;
				}
			case '\n':

		}
	}
}
