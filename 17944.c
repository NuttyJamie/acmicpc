#include <stdio.h>

int main()
{
	int n, t;
	
	scanf("%d %d", &n, &t);

	t%=(4*n-2);
	
	if(!t)		t=2;
	if(t > n*2)	t=4*n-t;
	printf("%d", t);
}

	//n=2
	//1 2 3 4 3 2 // 1 2 3 4 3 2
	//	peak=n*2=2*2=4
	//
	//n=3
	//1 2 3 4 5 6 5 4 3 2 // 1 2 3 4 5 6 5 4 3 2 
	//	peak=n*2=3*2=6
	//	count of sequence unit=n*4-2=10 
	//	t=4 => 4
