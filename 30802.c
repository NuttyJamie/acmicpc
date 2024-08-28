#include <stdio.h>

int main()
{
    int n, t, p, i, tsum=0;
    int size[6];

    scanf("%d", &n);

    for(i=0; i < 6; ++i)    scanf("%d", &size[i]);

    scanf("%d %d", &t, &p);

    for(i=0; i < 6; ++i)    
    {
        tsum+=(size[i]%t != 0)?     (size[i]/t)+1:size[i]/t;
    }
    printf("%d\n%d %d", tsum, n/p, n%p);
}