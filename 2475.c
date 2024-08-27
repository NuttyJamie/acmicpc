#include <stdio.h>

int main()
{
    int i, w, sum=0;

    for(i=5; i != 0; --i)
    {
        scanf("%d", &w);
        sum+=w*w;
    }
    printf("%d", sum%10);
}