#include <stdio.h>

int main()
{
	int n, d, next, prev=0, flag=0;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d", &d);
		printf("Denominations: ");
		while(d--)
		{
			scanf("%d", &next);
			printf("%d ", next);
			flag=(!flag && (prev<<1)-1 < next)?	flag:1;
			prev=next;
		}
		printf("\n%s coin denominations!\n\n", (!flag)?	"Good":"Bad");
		flag=prev=0;
	}
}
