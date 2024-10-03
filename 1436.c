#include <stdio.h>

int main()
{
	int n, i, copy; 

	scanf("%d", &n);

	for(i=666; n != 0; ++i)
	{
		copy=i;
		while(copy/100 != 0)
		{
			if((copy/100%10 == 6) && 
				(copy/10%10 == 6) && 
				   (copy%10 == 6)) 
			{
				--n;
				break;
			}
			else	copy/=10;
		}
	}
	printf("%d", i-1);
}
