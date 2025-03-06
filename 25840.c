#include <stdio.h>

int main()
{
	char t[405]={0};
	int n, m, d;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d/%d", &m, &d);
		t[m*31+d]=1;
	}
	for(m=0, d=0; d < 405; ++d)
		if(t[d])	++m;
	printf("%d", m);
}
