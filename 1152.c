#include <stdio.h>
#include <time.h>

int main()
{
	char s[1000001]={0,};
	int i, size, count=0;

	size=sizeof(s)/sizeof(char);

	fgets(s, size, stdin);

	for(i=0; i<size; ++i)
	{
		if(s[i]==0) break;
		else if(s[i]<'A')	continue;
		else if(s[i+1]<'A')
			count++;
	}
	printf("%d", count);
}
