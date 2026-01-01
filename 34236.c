#include <stdio.h>

int main()
{
    int n, a, d;
    
    scanf("%d %d %d", &n, &d, &a);

    d=a-d;
    n-=2;
    
    while(n--) scanf("%d", &a);
    
    printf("%d", a+d);
}