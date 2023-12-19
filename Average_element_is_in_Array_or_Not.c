#include <stdio.h>
int main()
{
    int n,i,a,flag=0,sum=0;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    a = sum/n;
    for (i=0;i<n;i++)
    {
        if (a==arr[i])
        flag=1;
    }
     if (flag==1)
     printf("True");
     else
     printf("False");
}