#include <stdio.h>

long intpow(int x, int y)
{
	if(y == 0) return 1;
	x=x*intpow(x, y-1);

	return x;
}

int main()
{
	char n[31];
	int b, i=0, l=0, total=0;

	scanf("%s %d", n, &b);

	while(n[l] != '\0')	l++;
	
	for(i=0; l-i-1 >= 0; ++i) 
	{
		if(n[i] <= '9')
			total+=intpow(b, l-i-1)*(n[i]-48);
		else
			total+=intpow(b, l-i-1)*(n[i]-55);
	}

	printf("%d", total);
}
