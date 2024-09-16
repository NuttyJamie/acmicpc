#include <stdio.h>
#include <string.h>

int main()
{
	char n[6];
	int i, flag=0;

	while(1)
	{
		scanf("%s", n);
		if(n[0] == '0')	break;
		for(i=0; i < strlen(n)/2; ++i)
		{
			if(n[i] != n[strlen(n)-i-1])	flag=1;
		}
		if(flag == 0)	puts("yes");
		else			puts("no");
		flag=0;
	}
}

