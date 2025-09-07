#include <stdio.h>

int main()
{
	int q, a, b, i, o;

	scanf("%d", &q);

	while(q--)
	{
		scanf("%d %d", &a, &b);

		if(b-a < 0)
		{
			i=b-a+43;
			o=a-b;
		}
		else
		{
			i=b-a;
			o=a-b+43;
		}
		puts((i < o)?	"Inner circle line":"Outer circle line");
	}
}
