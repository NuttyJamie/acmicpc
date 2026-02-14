#include <stdio.h>

int main()
{
	int n, r;
	char op;

	scanf("%d ", &r);

	while(1)
	{
		scanf("%c", &op);

		if(op != '=')	scanf("%d ", &n);

		switch(op)
		{
			case '+':	r+=n; break;
			case '-':	r-=n; break;
			case '*':	r*=n; break;
			case '/':	r/=n; break;
			case '=':	printf("%d", r); return 0;
		}
	}
}
