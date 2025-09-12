#include <stdio.h>
#include <string.h>

int main()
{
	struct
	{
		char color[7];
		int value;
		int scale;
	}table[10]=
	{
		{"black" , 0, 1},
		{"brown" , 1, 10},
		{"red"	 , 2, 100},
		{"orange", 3, 1000},
		{"yellow", 4, 10000},
		{"green" , 5, 100000},
		{"blue"  , 6, 1000000},
		{"violet", 7, 10000000},
		{"grey"  , 8, 100000000},
		{"white" , 9, 1000000000}
	};
	long long res=0;
	int i;
	char s[7];

	for(int d=2; d; --d)
	{
		scanf("%s", s);

		for(i=0; i < 10 && strncmp(s, table[i].color, 7); ++i);

		res*=10;
		res+=table[i].value;
	}
	scanf("%s", s);

	for(i=0; i < 10 && strncmp(s, table[i].color, 7); ++i);

	res*=table[i].scale;

	printf("%lld", res);
}
