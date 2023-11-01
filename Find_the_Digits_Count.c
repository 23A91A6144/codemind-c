#include <stdio.h>
int main()
{
    int n,r,dc=0l;
    scanf("%d",&n);
    while (n>0)
    {
        r = n % 10;
        dc++;
        n = n / 10;
    }
    printf("%d",dc);
}