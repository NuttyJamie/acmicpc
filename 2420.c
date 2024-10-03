#include <stdio.h>

int main()
{
    long n, m;

    scanf("%ld %ld", &n, &m);
    n=(n-m < 0)? -(n-m):(n-m);
    printf("%ld", n);
}
