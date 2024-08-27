#include <stdio.h>

int main()
{
    int a, b, c, t, n=1;

    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", a+b-c);

    t=b;
    while(t/10 != 0)
    {
        ++n;
        t/=10;
    }

    while(n != 0)
    {
        a*=10;
        --n;
    }
    printf("%d", a+b-c);
}