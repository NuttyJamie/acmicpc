#include <stdio.h>

int main()
{
	char word[1000001];
	int alphabet[26]={0,};

	int i, j=0, max=0;

	scanf("%s", word);

	for(i=0; word[i]!='\0'; ++i)
	{
		if(word[i]>'Z')	
			alphabet[(word[i]-'a')]+=1;
		else 
			alphabet[(word[i]-'A')]+=1;
	}
/*
	printf("\n\n alphabet arry:\n");		//debug output
	for(i=0; i<sizeof(alphabet)/sizeof(int); ++i)
	{
		printf("%d ", alphabet[i]);
	}										//output end	
*/
	for(i=0; i<sizeof(alphabet)/sizeof(int); ++i)
	{
		if(alphabet[i]>max)
		{
			max=alphabet[i];
			j=i;
		}
	}

	for(i=0; i<sizeof(alphabet)/sizeof(int); ++i)
	{
		if(alphabet[i]==max && i!=j)
		{
			putchar('?');
			break;
		}
		else if(i==sizeof(alphabet)/sizeof(int)-1)
			printf("%c", j+'A');	
	}
}
