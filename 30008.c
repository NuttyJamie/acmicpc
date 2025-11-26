#include <stdio.h>

int main()
{
	int n, k, g;

	scanf("%d %d", &n, &k);

	while(k--)
	{
		scanf("%d", &g);

		g*=100;
		g/=n;

		if(g < 5) 					g=1;
		else if(4 < g && g < 12)	g=2;
		else if(11 < g && g < 24)	g=3;
		else if(23 < g && g < 41)	g=4;
		else if(40 < g && g < 61)	g=5;
		else if(60 < g && g < 78)	g=6;
		else if(77 < g && g < 90) 	g=7;
		else if(89 < g && g < 97)	g=8;
		else 						g=9;

		printf("%d ", g);
	}
}
