#include <stdio.h>

int main()
{
	int buf, s=0, t=0;

	for(int i=4; i; --i)
	{
		scanf("%d", &buf);
		s+=buf;
	}
	for(int i=4; i; --i)
	{
		scanf("%d", &buf);
		t+=buf;
	}
	printf("%d", (s < t)? t:s);
}
