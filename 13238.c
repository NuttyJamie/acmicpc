#include <stdio.h>

int main()
{
	int n, p, lowest, mxbnf=0;

	scanf("%d %d", &n, &lowest);

	while(--n)
	{
		scanf("%d", &p);

		if(mxbnf < p-lowest) mxbnf=p-lowest;
		if(p < lowest) 		 lowest=p;
	}

	printf("%d", mxbnf);
}
