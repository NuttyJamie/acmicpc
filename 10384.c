#include <stdio.h>

int main()
{
	int l[26]={0};
	int n, i, j, min;
	char c;

	scanf("%d ", &n);

	for(i=1; i <= n; ++i)
	{
		for(j=0; j < 26; ++j) l[j]=0;

		while((c=getchar()) != '\n')
		{
			if(('A' <= c) && (c <= 'Z')) 		++l[c-'A'];
			else if(('a' <= c) && (c <= 'z'))	++l[c-'a'];
		}

		for(j=1, min=l[0]; j < 26; ++j)
			if(l[j] < min)	min=l[j];

		printf("Case %d: ", i);
		if(min >= 3)		printf("Triple pangram!!!\n");
		else if(min == 2)	printf("Double pangram!!\n");
		else if(min)		printf("Pangram!\n");
		else				printf("Not a pangram\n");
	}
}
