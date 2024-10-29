#include <stdio.h>

int main()
{
	char w, count=0;
	while((w=getchar()) != EOF)
		if(w == '\n') ++count;
	printf("%d", count);
}
