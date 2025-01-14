#include <stdio.h>

int main()
{
	int t;
	char d, k, y=0;
	k=y;

	scanf("%d ", &t);

	while(t--)
	{
		for(int i=0; i < 9; ++i)
		{
			y+=getchar()-'0';
			getchar();
			k+=getchar()-'0';
			getchar();
		}
		puts((y > k)? "Yonsei": (y < k)? "Korea":"Draw");
		y=k=0;
	}
}
