#include <stdio.h>

int main()
{
	double entire, first, second;
	int p[3];
	int c1, c2, c3, i, j, total=0;

	for(i=0; i < 3; ++i)
	{
		scanf("%d", &p[i]);
		total+=p[i];
	}

	scanf("%d %d %d", &c1, &c2, &c3);

	for(i=0; i < 2; ++i)
		for(j=i+1; j < 3; ++j)
		{
			if(p[i] < p[j])
			{
				p[i]^=p[j];
				p[j]^=p[i];
				p[i]^=p[j];
			}
		}

	entire=(double)total*c1/100;
	first=(double)p[0]*((c2 > c3)?	c2:c3)/100;
	second=(double)p[1]*((c2 > c3)?	c3:c2)/100;
	printf("%s %.2lf", ((entire > first+second)?	"one":"two"), ((entire > first+second)?	entire:first+second));
}
