#include <stdio.h>

int main()
{
	int n, i;

	scanf("%d", &n);

	printf("int a;\nint *ptr = &a;\n");

	if(n > 1)
	{
		puts("int **ptr2 = &ptr;");
		for(int t=3; t <= n; ++t)
		{
			printf("int ");
			for(i=0; i < t; ++i)	putchar('*');
			printf("ptr%d = &ptr%d;\n", t, t-1);
		}
	}
}
