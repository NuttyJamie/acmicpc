#include <stdio.h>

int main()
{
	int offset, la, lb, i, j, diff, min=-1;
	char a[51], b[51];

	la=lb=0;

	scanf("%s %s", a, b);

	for(la=i=0; a[i]; ++i, ++la);
	for(lb=i=0; b[i]; ++i, ++lb);

	offset=lb-la;
	for(i=0; i <= offset; ++i)
	{
		diff=0;
		for(j=0; j < la; ++j)
			if(a[j] != b[i+j])	++diff;
		min=(diff < min || min == -1)?	diff:min;
	}

	printf("%d", min);
}
