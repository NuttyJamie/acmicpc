#include <stdio.h>

int main()
{
    int n;
    char s[]="WelcomeToSMUPC";
    
    scanf("%d", &n);
    
    n=(n-1)%14;
    
    putchar(s[n]);
}