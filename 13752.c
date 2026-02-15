#include <stdio.h>

int main()
{
    int n, k;
    
    scanf("%d", &n);
    
    while(n--)
    {
        scanf("%d", &k);
        
        while(k--) putchar('=');
        putchar('\n');
    }
}