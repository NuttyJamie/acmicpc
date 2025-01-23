#include <stdio.h>

int main()
{
	int n, p;

	scanf("%d %d", &n, &p);

	if(n > 19)	p=((p>>2)*3 > p-2000)? 		p-2000:(p>>2)*3;
	else if(n > 14)	p=(p-2000 > p-p/10)?	p-p/10:p-2000;
	else if(n > 9)	p=(p-p/10 > p-500)?		p-500:p-p/10;
	else if(n > 4)	p-=500;
	printf("%d", (p < 0)? 0:p);
}

