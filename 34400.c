#include <stdio.h>

int main()
{
	int t, time;

	scanf("%d", &t);

	while(t--)
	{
		scanf("%d", &time);

		if(time%25 < 17)	puts("ONLINE");
		else				puts("OFFLINE");
	}
}
