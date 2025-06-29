#include <stdio.h>

int main()
{
	int n, count;
	char c;

	scanf("%d ", &n);

	while(n--)
	{
		count=0;
		while((c=getchar()) != '\n')	++count;
		if(5 < count && count < 10)		puts("yes");
		else							puts("no");
	}
}
