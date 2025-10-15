#include <stdio.h>

int main()
{
    int a, b, width, ha=0, hb=0;
    
    scanf("%d %d", &a, &b);
    
    while(a%4)    ++a, ++ha;
    while(b%4)    ++b, ++hb;
    
    width=(a > b)?  a-b:b-a;
    width>>=2;
    
    ha=(ha > hb)?  ha-hb:hb-ha;
    
    printf("%d", width+ha);
}
