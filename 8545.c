#include <stdio.h>

int main()
{
	char w[3];

	w[0]=getchar();
	w[1]=getchar();
	w[2]=getchar();
	printf("%c%c%c", w[2], w[1], w[0]);
}
