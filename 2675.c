#include <stdio.h>

int main()
{
	char S[21];
	int T, R, i, j, k;

	scanf("%d", &T);

	for(k=0; k<T; ++k)
	{
		scanf("%d", &R);
		scanf("%s", S);
		for(i=0; S[i]!='\0'; ++i)
		{
			for(j=0; j<R; ++j)
			{
				printf("%c", S[i]);
			}
		}
		printf("\n");
	}
}
