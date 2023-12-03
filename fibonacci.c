#include <stdio.h>
int main()
{
    int n,i=2,a=0,b=1,nt;
    scanf("%d",&n);
    printf("%d %d",a,b);
    for(i=2;i<n;i++)
    {
        nt=a+b;
        a=b;
        b=nt;
        printf(" %d",nt);
    }
}