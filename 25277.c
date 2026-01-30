#include <stdio.h>
#include <string.h>

int main()
{
	int n, x=0;
	char w[21];

	scanf("%d", &n);

	while(n--)
	{
		scanf("%s", w);

		if(		!strcmp(w, "she")||
				!strcmp(w, "he") ||
				!strcmp(w, "her")||
				!strcmp(w, "him"))
			++x;
	}
	printf("%d", x);
}
