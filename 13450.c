#include <stdio.h>

int main()
{
	int t, ma, mb;

	scanf("%d", &t);

	while(t--)
	{
		scanf("%d ", &ma);
		int count=ma;
		while(count)
			if(getchar() == '\n')	--count;
		scanf("%d ", &mb);
		puts((ma == mb)?	"yes":"no");
		count=mb;
		while(count)
			if(getchar() == '\n')	--count;
	}
}
