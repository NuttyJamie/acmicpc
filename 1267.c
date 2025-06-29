#include <stdio.h>

int main()
{
	int n, t, ys=0, ms=0;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d", &t);

		ys+=10+(t/30)*10;
		ms+=15+(t/60)*15;
	}
	if(ys == ms)	printf("Y M %d", ys);
	else			printf("%c %d", (ys < ms)?	'Y':'M', (ys < ms)?	ys:ms);
}
