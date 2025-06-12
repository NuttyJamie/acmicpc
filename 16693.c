#include <stdio.h>
#include <math.h>

int main()
{
	double v1, v2;
	int a1, p1, r1, p2;

	scanf("%d %d %d %d", &a1, &p1, &r1, &p2);

	v1=(double)a1/p1;
	v2=(double)(r1*r1)*M_PI/p2;

	puts((v1 < v2)?	"Whole pizza":"Slice of pizza");
}
