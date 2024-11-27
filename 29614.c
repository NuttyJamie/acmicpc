#include <stdio.h>

int main()
{
	char c;
	int n=0;
	double sum=0;

	while((c=getchar()) != '\n')
	{
		switch(c)
		{
			case 'A':
				sum+=4;
				break;
			case 'B':
				sum+=3;
				break;
			case 'C':
				sum+=2;
				break;
			case 'D':
				sum+=1;
				break;
			case '+':
				sum+=0.5;
				--n;
				break;
		}
		++n;
	}
	printf("%g", sum/n);
}
