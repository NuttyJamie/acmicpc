#include <stdio.h>

int main()
{
	int diff=0;
	char c;
	
	c=getchar();
	getchar();
	diff=c-getchar();
	
	if(diff == -4 || diff == 22)		puts("NLCS");
	else if(diff == -25 || diff == 1)	puts("BHA");
	else if(diff == -7 || diff == 19)	puts("KIS");
	else								puts("SJA");
}