#include <stdio.h>
#include <unistd.h>
#define SIZE 1000000

int main()
{
	char s[SIZE];
	char *p=s;
	int o=0, z=0;

	setbuf(stdin, NULL);
	ssize_t l=read(0, s, SIZE);
	--l;

	if(*p == '1')	++o;
	else			++z;
	while(++p < s+l)
	{
		if(*p != *(p-1))
		{
			if(*p == '1') 	++o;
			else			++z;
		}
	}

	printf("%d", (o < z)?	o:z);
}
