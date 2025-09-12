#include <stdio.h>

int main()
{
	int n, i, j, flag=0;
	char arr[101][101];

	scanf("%d", &n);

	for(i=0; i < n; ++i)
		scanf("%s", arr[i]);

	for(i=0; i < n && !flag; ++i)
	{
		for(j=0; j < n && !flag; ++j)
		{
			if(arr[i][j] != arr[j][i])
				flag=1;
		}
	}

	printf("%s", (flag)?	"NO":"YES");
}
