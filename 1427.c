#include <stdio.h>

int main()
{
	char n[10]={0};
	int buf;
	
	while((buf=getchar()-48) >= 0)
		n[buf]++;
	for(buf=9; buf >= 0; --buf)
		while(n[buf]--)
			printf("%d", buf);
}
