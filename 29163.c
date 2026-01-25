#include <stdio.h>

int main()
{
    int n, a, i, o=0;
    
    scanf("%d", &n);
    
    for(i=0; i < n; ++i)
    {
        scanf("%d", &a);
        
        o+=(a & 1);
    }
    if(n & 1) n=n/2+1;
    else      n/=2;
    puts((o < n)? "Happy":"Sad");
}