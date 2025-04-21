#include <stdio.h>

int main()
{
	long long op1, op2, res;
	int t;
	char symbol;

	scanf("%d", &t);

	while(t--)
	{
		long long answer;
		scanf("%lld %c %lld = %lld", &op1, &symbol, &op2, &res);

		switch(symbol)
		{
			case '+':
				answer=op1+op2;
				break;
			case '-':
				answer=op1-op2;
				break;
			case '*':
				answer=op1*op2;
				break;
			case '/':
				answer=op1/op2;
				break;
		}
		puts((answer == res)?	"correct":"wrong answer");
	}
}
