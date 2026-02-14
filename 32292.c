#include <stdio.h>

int main()
{
	int t, n, i, abb;
	char s[2001];

	scanf("%d", &t);

	while(t--)
	{
		scanf("%d %s", &n, s);

		do
		{
			abb=0;

			for(i=0; i < n-2; ++i)
			{
				if((s[i] & 1) && !(s[i+1] & 1) && !(s[i+2] & 1))
				{
					int z=i+2;

					abb=1;
					s[i+1]=s[i];
					s[i]=s[i+2];
					do{ s[z]=s[z+1]; }while(s[z++]);
					--n;
					break;
				}
			}
		}while(abb);

		puts(s);
	}
}
