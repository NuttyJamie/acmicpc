#include <stdio.h>

int main()
{
	int a, b, c;
	
	scanf("%d %*c %d %*c %d", &a, &b, &c);
	puts((a+b == c)?	"YES":"NO");	
}
