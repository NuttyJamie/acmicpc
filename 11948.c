#include <stdio.h>

int main()
{
    int a, b, c, d, e, f;
    int min=100, min2=0, sum=0;
    
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    
    sum=a+b+c+d+e+f;
    
    if(a < min) min=a;
    if(b < min) min=b;
    if(c < min) min=c;
    if(d < min) min=d;
    
    min2=e;
    if(f < min2) min2=f;
    
    sum-=min+min2;
    
    printf("%d", sum);
}