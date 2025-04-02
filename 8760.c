#include <stdio.h>

int main()
{
	int z, w, k;

	scanf("%d", &z);

	while(z--)
	{
		scanf("%d %d", &w, &k);

		w*=k;
		w>>=1;
		printf("%d\n", w);
	}
}
