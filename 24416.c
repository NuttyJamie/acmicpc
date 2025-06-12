#include <stdio.h>

int main()
{
	int n, code1=1;

	scanf("%d", &n);

	for(int tmp, prev=code1, i=2; i < n; ++i)
	{
		tmp=code1;
		code1+=prev;
		prev=tmp;
	}

	printf("%d %d", code1, n-2);
}
