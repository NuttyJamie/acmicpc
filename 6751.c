#include <stdio.h>

int get_dup(int n)
{
	int i, max=0;
	char digit[10];

	for(i=0; i < 10; ++i) digit[i]=0;

	while(n)
	{
		++digit[n%10];
		n/=10;
	}

	for(i=0; i < 10; ++i)
		if(max < digit[i])	max=digit[i];

	return max;
}

int main()
{
	int i, d, y;

	scanf("%d", &y);

	d=y;

	do{++d;}while(get_dup(d) > 1);

	printf("%d", d);
}
