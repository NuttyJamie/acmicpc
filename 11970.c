#include <stdio.h>

int main()
{
	int a, b, c, d;
	int f[100]={0};
	scanf("%d %d %d %d", &a, &b, &c, &d);
	while(a != b)	f[a++]=1;
	while(c != d)	f[c++]=1;
	for(a=0, b=0; a < 100; ++a)
		if(f[a])	b++;
	printf("%d", b);
}

