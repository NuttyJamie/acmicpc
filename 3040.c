#include <stdio.h>

int main()
{
	int t[9];
	int i, j=0, k=1, sum=0;

	for(i=0; i < 9; ++i) scanf("%d", &t[i]);

	while(j < 8)
	{
		for(i=0; i < 9; ++i)
			if(i != j && i != k)	sum+=t[i];
		if(sum == 100)	break;
		else if(k < 8)	++k;
		else			++j, k=j+1;
		sum=0;
	}
	for(i=0; i < 9; ++i)
		if(i != j && i != k)
			printf("%d\n", t[i]);
}
