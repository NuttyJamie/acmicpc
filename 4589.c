#include <stdio.h>

int main()
{
    int t, a, b, c;
    
    scanf("%d", &t);
    
    puts("Gnomes:");
    while(t--)
    {
        scanf("%d %d %d", &a, &b, &c);
        if((a < b && b < c) || (a > b && b > c))
            puts("Ordered");
        else puts("Unordered");
    }
}