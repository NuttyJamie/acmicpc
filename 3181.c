#include <stdio.h>
#include <string.h>

int main()
{
	char s[102]={0};
	char *p=s;
	
	fgets(s, 102, stdin);

	p=strtok(s, " ");
	putchar((*p < 'a')? *p:*p-32);
	p=strtok(NULL, " ");
	while(p != NULL)
	{
		if(strcmp(p, "i")		&&
			strcmp(p, "i")		&&
			strcmp(p, "pa")		&&
			strcmp(p, "te")		&&
			strcmp(p, "ni")		&&
			strcmp(p, "niti")	&&
			strcmp(p, "a")		&&
			strcmp(p, "ali")	&&
			strcmp(p, "nego")	&&
			strcmp(p, "no")		&&
			strcmp(p, "ili"))	putchar((*p < 'a')? *p:*p-32);
		p=strtok(NULL, " ");
	}
}

