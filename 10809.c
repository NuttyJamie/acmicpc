#include <stdio.h>

int main()
{
	char S[101];
	char alphabet[26];
	int i;

	for(i=0; i<26; ++i)
	   	alphabet[i]=-1; 

	scanf("%s", S);

	for(i=0; S[i]!='\0'; ++i)
	{
		if(alphabet[(S[i]-97)]==-1)
			alphabet[(S[i]-97)]=i;	
		else	continue;
	}
	for(i=0; i<26; ++i)
		printf("%d ", alphabet[i]);
}
