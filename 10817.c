#include <stdio.h>

int main()
{
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);

	if(a>=b)	// abc acb cab
	{
		if(c>=a)
			printf("%d", a);
		else if(c>=b)
			printf("%d", c);
		else 
			printf("%d", b);
	}	
	else 		// bac bca cba
	{
		if(c>=b)
			printf("%d", b);
		else if(c>=a)
			printf("%d", c);
		else
			printf("%d", a);
	}	
}
