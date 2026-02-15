#include <stdio.h>

int main()
{
	int k, p;
	char w[21];

	scanf("%d %s", &k, w);

	for(p=0; w[p]; ++p)
	{
		w[p]-=3*(p+1)+k;
		if(w[p] < 'A')		w[p]+=26;
		else if(w[p] > 'Z')	w[p]-=26;
	}

	printf("%s", w);
}
