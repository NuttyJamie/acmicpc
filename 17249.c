#include <stdio.h>

int main()
{
    int l=0, r=0;
    char c;
    
    while((c=getchar()) != '0')
        if(c == '@') ++l;
    while((c=getchar()) != '\n')
        if(c == '@') ++r;
        
    printf("%d %d", l, r);
}