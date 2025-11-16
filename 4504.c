#include <stdio.h>

int main()
{
    int n, t;
    
    scanf("%d", &n);
    
    while(1)
    {
        scanf("%d", &t);
        
        if(!t) break;
        
        printf("%d is %sa multiple of %d.\n", t, ((t%n)? "NOT ":""), n);
    }
}