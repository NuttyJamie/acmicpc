#include <stdio.h>

int main()
{
	int n, d, i=0, sum=0;
	int m[30];
	scanf("%d %d", &n, &d);
	
	while(n--)
	{
		scanf("%d", &m[i]);
		sum+=m[i++];
	}
	while(i--) printf("%d\n", d/sum*m[++n]);
}