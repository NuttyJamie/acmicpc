#include <stdio.h>

int main()
{
	int n, m, k;

	scanf("%d %d %d", &n, &m, &k);

	if(n < m)	printf("0 %d", n-1);
	else		printf("%d %d", (n > m*k)? n-m*k:0, n-m*(k-1)-1);
}
// i. 	n > mk
// min= n-mk
// max= n-mk+m-1
//
// ii.	n < mk
// 	1) n < m
// min= 0 
// max= n-1
//  2) n > m ex) 16 7 3
// min= 0 
// max= n-m(k-1)-1
//
// iii. n == mk ex) 20 5 4
// min= 0
// max= n-m(k-1)-1
// 		n-m*k+m-1
