#include <stdio.h>

int main()
{
	char w[1001];
	int i;
	
	scanf("%s%d", w, &i);
	
	printf("%c", w[i-1]);
}
