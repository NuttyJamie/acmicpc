#include <stdio.h>

int main()
{
    double weight;
    
    while(1)
    {
        scanf("%lf", &weight);
        
        if(weight < 0) break;
        
        printf("Objects weighing %.2lf on Earth will weigh %.2lf on the moon.\n", weight, weight*167/1000);
    }
}