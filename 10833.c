#include <stdio.h>

int main()
{
	int n, students, apple, total=0;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d %d", &students, &apple);

		total+=apple%students;
	}

	printf("%d", total);
}
