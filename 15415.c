#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define BUF_SIZE 25000000

int main()
{
	char *t=(char*)malloc(BUF_SIZE*sizeof(char));
	char *p=t;
	int w=0, wi=0, li=0, s=0;

	int n;
	setvbuf(stdin, NULL, _IONBF, 0);
	scanf("%d %d", &w, &n);
	ssize_t l=read(0, t, BUF_SIZE);
	t[l]=0;
	while(n--)
	{
		while(*p != ' ')
		{
			wi*=10;
			wi+=*p-'0';
			++p;
		}
		++p;
		while(*p != '\n')
		{
			li*=10;
			li+=*p-'0';
			++p;
		}
		++p;
		s+=wi*li;
		wi=li=0;
	}
	printf("%d", s/w);
	free(t);
}
