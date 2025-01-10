#include <stdio.h>

int main()
{
	int n, a, p;
	double s;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d %d", &a, &p);
		s=(double)a/p;
		scanf("%d %d", &a, &p);
		puts((s > (double)3.141592*a*a/p)?	"Slice of pizza":"Whole pizza");
	}
}
