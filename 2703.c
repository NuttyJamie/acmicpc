#include <stdio.h>

int main()
{
	int t;
	char msg[102], alpha[28];
	char *p=msg;

	scanf("%d ", &t);

	while(t--)
	{
		fgets(msg, 102, stdin);
		fgets(alpha, 28, stdin);

		for(p=msg; *p != '\n'; ++p)
		{
			if(*p != ' ')	putchar(alpha[*p-65]);
			else			putchar(*p);
		}
		putchar(*p);
	}
}
