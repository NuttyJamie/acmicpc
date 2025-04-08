#include <stdio.h>
#include <unistd.h>

int main()
{
	char c[1001]={0}, table[26]={0};
	char freq;
	char *p=c;
	int i, max=0;

	setbuf(stdin, NULL);
	scanf("%*d");
	ssize_t l=read(0, c, 1001);
	c[l-1]='\n';

	while(*p != '\n')
	{
		++table[*p-'a'];
		++p;
	}
	
	for(i=0; i < 26; ++i)
	{
		if(!max || (max < table[i]))
		{
			max=table[i];
			freq='a'+i;
		}
	}

	printf("%c %d", freq, max);
}

