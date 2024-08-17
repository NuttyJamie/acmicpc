#include <stdio.h>

int main()
{
	char result[30];
	int n, b, i;

	scanf("%d %d", &n, &b);

	for(i=0; n != 0; n/=b, ++i)
		result[i]=n%b;

	for(i--; i >= 0; --i)
	{
		if(b > 10 && result[i] >= 10)	printf("%c", result[i]+55);
		else							printf("%d", result[i]);
	}
}
