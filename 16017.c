#include <stdio.h>

int main()
{
	int n[4], i;
	for(i = 0; i < 4; ++i) scanf("%d", &n[i]);
	
	if((n[0] < 8) || (n[3] < 8) || n[1] != n[2])
		puts("answer");
	else
		puts("ignore");
}
