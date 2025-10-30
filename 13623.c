#include <stdio.h>

int main()
{
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if(a == b && b == c)      putchar('*');
    else if(a != b && b == c) putchar('A');
    else if(a == c && a != b) putchar('B');
    else                      putchar('C');
}