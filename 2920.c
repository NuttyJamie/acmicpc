#include <stdio.h>

int main()
{
    int i, flag=0, last=0, note=0;

    for(i=0; i < 8; ++i)
    {
        scanf("%d", &note);
        if(last == 0)   
        {
            last=note;
            continue;
        }
        else if(flag == 0 && last < note)   flag=1;
        else if(flag == 0 && last > note)   flag=-1;
        if((flag == -1 && last < note) || (flag ==  1 && last > note))
        {
            puts("mixed");
            return 0;
        }
        last=note;
    }
    if(flag > 0)    puts("ascending");
    else            puts("descending");
}
