#include <stdio.h>

int main()
{
    int a[5], b[5];
    
    scanf("%d %d %d %d %d", &a[0], &a[1], &a[2],&a[3], &a[4]);
    scanf("%d %d %d %d %d", &b[0], &b[1], &b[2],&b[3], &b[4]);
    
    printf("%d\n%d", 6*a[0]+3*a[1]+2*a[2]+a[3]+2*a[4], 6*b[0]+3*b[1]+2*b[2]+b[3]+2*b[4]);
}
