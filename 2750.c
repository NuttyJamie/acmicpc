#include <stdio.h>

int main()
{
    int n, i, j, tmp;
    int x[1000];
    
    scanf("%d", &n);

    for(i=0; i < n; ++i)
        scanf("%d", &x[i]);

	for(j=n; j > 0; --j)
	{
		for(i=0; 0 < n-i-1; ++i)
		{
			if(x[i] > x[i+1])
			{
				tmp=x[i];
				x[i]=x[i+1];
				x[i+1]=tmp;
			}
		}
	}

    for(i=0; i < n; ++i)
		printf("%d\n", x[i]);
}
