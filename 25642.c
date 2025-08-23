#include <stdio.h>

int main()
{
	int a, b, flag=0;

	scanf("%d %d", &a, &b);

	while(a < 5 && b < 5)
	{
		if(!flag)	b+=a, flag=1;
		else		a+=b, flag=0;
	}

	printf("%s", (a < b)?	"yt":"yj");
}
