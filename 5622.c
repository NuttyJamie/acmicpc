#include <stdio.h>

int main()
{
	char word[16]={0};
	char alphabet[26]={3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, \
		7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
	int i, sum=0;

	scanf("%s", word);
	for(i=0; i<sizeof(word)/sizeof(char); ++i)
	{
		sum+=alphabet[(word[i]-'A')];
	}
	printf("%d", sum);
}
