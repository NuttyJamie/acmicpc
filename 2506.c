#include <stdio.h>

int main()
{
	int n, ox, combo=0, total=0;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d", &ox);

		if(!ox)	combo=0;
		combo+=ox;
		total+=combo;
	}

	printf("%d", total);
}
