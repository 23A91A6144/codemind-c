#include <stdio.h>
int main()
{
	int n,num,i,flag=0;
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&num);
	for (i=0;i<n;i++)
	{
		if (num == arr[i])
		{
			flag=1;
  			break;
	    }
	}
	if (flag == 1)
	printf("True");
	else
	printf("False");
}