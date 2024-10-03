#include <stdio.h>

int main()
{
	int goodonion=1, badonion=1;
	int a, b, n, tmp;

	scanf("%d %d %d", &n, &a, &b);

	while(n--)
	{
		goodonion+=a;
		badonion+=b;
		if(goodonion < badonion)
		{
			tmp=goodonion;
			goodonion=badonion;
			badonion=tmp;
		}
		else if(goodonion == badonion)
			--badonion;
	}
	printf("%d %d", goodonion, badonion);
}
