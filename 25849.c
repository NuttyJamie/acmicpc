#include <stdio.h>

int main()
{
    int bill[6];
    int i, t, max=0;
    
    for(i=0; i < 6; ++i)
        scanf("%d", &bill[i]);
    bill[1]*=5;
    bill[2]*=10;
    bill[3]*=20;
    bill[4]*=50;
    bill[5]*=100;
    
    for(i=0; i < 6; ++i)
    {
        if(max <= bill[i])
        {
            max=bill[i];
            t=i;
        }
    }
    switch(t)
    {
        case 0: t=1;break;
        case 1: t=5;break;
        case 2: t=10;break;
        case 3: t=20;break;
        case 4: t=50;break;
        case 5: t=100;break;
    }
    printf("%d", t);
}