#include <stdio.h>

int main()
{
	int h, m, l, cola, cider, price;

	scanf("%d%d%d%d%d", &h, &m, &l, &cola, &cider);

	if(h>m)
	{
		if(m>l)	price=l;
		else	price=m;
	}
	else
	{
		if(h>l)	price=l;
		else	price=h;
	}
	price+=(cola > cider)?	cider : cola;

	printf("%d", price-50);
}
