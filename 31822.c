#include <stdio.h>
#include <string.h>

int main()
{
	char retake[11]={0}, codes[11]={0};
	int n, count=0;

	scanf("%s %d", retake, &n);

	while(n--)
	{
		scanf("%s", codes);
		if(!strncmp(retake, codes, 5))	++count;
	}

	printf("%d", count);
}
