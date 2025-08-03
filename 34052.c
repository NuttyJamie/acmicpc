#include <stdio.h>

int main()
{
	int t, total=0;

	for(int i=0; i < 4; ++i)
	{
		scanf("%d", &t);
		total+=t;
	}
	
	if(total+300 <= 1800)	puts("Yes");
	else					puts("No");
}
