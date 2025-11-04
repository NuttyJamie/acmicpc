#include <stdio.h>

int main()
{
	int d, i, length, left=0, right=1;
	char n[11];

	scanf("%s", n);

	for(length=i=0; n[i]; ++i) ++length;

	for(d=1; left != right && d < length; ++d)
	{
		for(left=1, i=0; i < d; ++i) 		left*=n[i]-'0';
		for(right=1, i=d; i < length; ++i) 	right*=n[i]-'0';
	}

	printf("%s", (left == right)?	"YES":"NO");
}
