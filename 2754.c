#include <stdio.h>

float subscore(char sig)
{
    switch (sig)
    {
        case '+':
            return 0.3;    
        case '-':
            return -0.3;    
        default:
            return 0;
    }
}

float score(char ch)
{
    switch (ch)
    {
        case 'A':
            return 4.0;
        case 'B':
            return 3.0;
        case 'C':
            return 2.0;
        case 'D':
            return 1.0;
        case 'F':
            return 0.0;
    }
}
int main()
{
    char w;

    w=getchar();
    printf("%.1f", score(w)+subscore(getchar()));
}