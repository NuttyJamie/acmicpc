#include <stdio.h>

int main()
{
	int gandalf[6]={1, 2, 3, 3, 4, 10};
	int sauron[7]={1, 2, 2, 2, 3, 5, 10};
	int t, i, x, s_gandalf, s_sauron;

	scanf("%d", &t);

	for(int n=0; n < t; ++n)
	{
		s_sauron=s_gandalf=0;

		for(i=0; i < 6; ++i)
		{
			scanf("%d", &x);
			s_gandalf+=x*gandalf[i];
		}

		for(i=0; i < 7; ++i)
		{
			scanf("%d", &x);
			s_sauron+=x*sauron[i];
		}

		printf("Battle %d: %s\n", n+1, (s_gandalf > s_sauron)?\
				"Good triumphs over Evil":(s_gandalf == s_sauron)?\
				"No victor on this battle field":
				"Evil eradicates all trace of Good");
	}
}

