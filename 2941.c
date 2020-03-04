#include <stdio.h>

int main()
{
	char word[101]={0,};
	int i, count=0;

	scanf("%s", word);

	for(i=100; i>=0; --i)
	{
		if(word[i]==0) continue;
		else if(word[i]=='j')
		{
			if(word[i-1]=='n' || word[i-1]=='l')
			{
				count++;
				i--;
				continue;
			}
			count++;
		}
		else if(word[i]<'A')
		{
			if(word[i-1]=='z' && word[i-2]=='d')
			{
				count++;
				i-=2;
				continue;
			}
			count++;
			i--;
		}
		else count++;
	}

	printf("%d", count);
}
