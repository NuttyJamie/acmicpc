#include <stdio.h>

struct dic
{
	char ch;
	char *s;
};

int main()
{
	struct dic table[]=
	{
		{'A', "000000"},
		{'B', "001111"},
		{'C', "010011"},
		{'D', "011100"},
		{'E', "100110"},
		{'F', "101001"},
		{'G', "110101"},
		{'H', "111010"}
	};
	char s[55]={0};
	int i, j, l, p, diff=0;

	scanf("%d %s", &l, s);
	
	for(p=0; p < l; ++p, diff=0)
	{
		for(i=0; i < 8; ++i, diff=0)
		{
			for(j=0; j < 6; ++j)
			{
				if(table[i].s[j] != s[j+p*6])	diff++;
				if(diff > 1)				break;
			}
			if(j == 6)
			{
				s[p]=table[i].ch;
				break;
			}
		}
		if(i == 8)
		{
			printf("%d", p+1);
			return 0;
		}
	}
	printf("%.*s", l, s);
}

