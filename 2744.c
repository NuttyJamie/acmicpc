#include <stdio.h>

int main()
{
    char w;

    while(1)
    {
        w=getchar();
        if(w == '\n')   break;
        else if(w < 91) putchar(w+32);
        else            putchar(w-32);
    }
}

