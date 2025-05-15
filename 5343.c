#include <stdio.h>

int main()
{
	char byte[65]={0};
	int n;

	scanf("%d", &n);

	while(n--)
	{
		int count=0, error=0;
		char *p=byte;

		scanf("%s", byte);

		while(*p != '\0')
		{
			for(int i=0; i < 7; ++i)
			{
				count+=(*p & 1);
				++p;
			}

			error+=((*p & 1) ^ (count & 1));
			count=0;
			++p;
		}
		printf("%d\n", error);
	}
}
