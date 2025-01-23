#include <stdio.h>

int draw_border(int n)
{
	if(n == 3)	putchar('*');
	else		square(n/3, 0);
}

int draw_centre(int n)
{
	if(n == 3)	putchar(' ');
	else 		putchar(' ');
}

int square(int n, int flag)
{
	draw_border(n);
	draw_border(n);
	draw_border(n);
	if(flag)	putchar('\n');
	draw_border(n);
	draw_centre(n);
	draw_border(n);
	if(flag)	putchar('\n');
	draw_border(n);
	draw_border(n);
	draw_border(n);
}

int main()
{
	int n;

	scanf("%d", &n);
	square(n, 1);
}

	//square(27)
	//square(9)+square(9)+..
	//square(3)+square(3)+..
	//*********
	//* ** ** *
	//*********
	//***   ***
	//* *   * *
	//***   ***
	//*********
	//* ** ** *
	//*********	
