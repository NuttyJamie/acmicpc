#include <stdio.h>

int main()
{
	int ca, ba, pa, cr, br, pr, m=0;
	
	scanf("%d %d %d %d %d %d", &ca, &ba, &pa, &cr, &br, &pr);

	if(cr-ca > 0) m+=cr-ca;
	if(br-ba > 0) m+=br-ba;
	if(pr-pa > 0) m+=pr-pa;
	
	printf("%d", m);
}