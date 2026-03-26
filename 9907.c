#include <stdio.h>

int main()
{
	int sum;
	char l[11]={'J', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'Z'};
	char n[8];

	scanf("%s", n);

	for(int i=0; i < 8; ++i)	n[i]-='0';
	sum=n[0]*2+n[1]*7+n[2]*6+n[3]*5+n[4]*4+n[5]*3+n[6]*2;
	printf("%c", l[sum%11]);
}
