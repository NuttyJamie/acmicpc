#include <stdio.h>

int main()
{
	int n, k, x, i, count, mutant;
	char me[101], ances[101];

	scanf("%d", &x);

	for(int t=0; t < x; ++t)
	{
		mutant=0;

		printf("Data Set %d:\n", t+1);

		scanf("%d %d %s", &n, &k, me);

		for(int s=0; s < n; ++s)
		{
			scanf("%s", ances);

			for(i=0; i < k; ++i)
				if(me[i] == ances[i]) me[i]=-1;
		}

		for(i=0; me[i]; ++i)
			if(me[i] > 0) ++mutant;

		printf("%d/%d\n\n", mutant, k);
	}
}
