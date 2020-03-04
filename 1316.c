#include <stdio.h>

int main()
{
	char word[101];
	char alphabet[26];
	int N, i, j, count=0;

	scanf("%d", &N);

	for(j=0; j<N; ++j)
	{
		for(i=0; i<26; ++i)
		{
			alphabet[i]=0;
		}
		scanf("%s", word);

		for(i=0; word[i]!=0; ++i)
		{
			if(word[i]!=word[i+1])	
			{
				if(alphabet[word[i+1]-'a']==1)
				{
					count--;
					break;
				}
				else
					alphabet[word[i]-'a']=1;	// aabcca
			}
		}
		count++;
	}
	printf("%d", count);
}
