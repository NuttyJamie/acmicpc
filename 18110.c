#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    int arg1=*(const int*)a;
    int arg2=*(const int*)b;
    return (arg1 > arg2)?   1:-1;
}
int main()
{
    int i, j, n, sum=0;
    int dif[300000];
    double g;

    scanf("%d", &n);

    g=round(n*0.15);

    for(i=0; i < n; ++i)    scanf("%d", &dif[i]);

    qsort(dif, n, sizeof(int), cmp);

    for(i=g; i < n-g; ++i) sum+=dif[i];
    if(n == 0)  putchar('0');
    else        printf("%.0lf", round((double)sum/(double)(n-2*g)));
}