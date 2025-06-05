#include <stdio.h>

int main()
{
    long double a, b, c;
    
    scanf("%llf %llf %llf", &a, &b, &c);
    
    a=(a*b/c > a/b*c)? a*b/c:a/b*c;
    printf("%d", (int)a);
}
