#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if (x<3)
    {
        printf("LIGHT");
    }
    else if (x>=7)
    {
        printf("HEAVY");
    }
    else
    {
        printf("MODERATE");
    }
}