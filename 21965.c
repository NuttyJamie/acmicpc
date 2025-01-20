#include <stdio.h>

int main()
{
	int n, a_pre, a_cur=0, flag=0;

	scanf("%d %d", &n, &a_pre);
	while(--n)
	{
		scanf("%d", &a_cur);
		if(a_pre == a_cur || (flag < 0 && a_pre < a_cur))
		{
			puts("NO");
			break;
		}
		flag=(a_pre < a_cur)?	1:-1;
		a_pre=a_cur;
	}
	if(!n)	puts("YES");
}

