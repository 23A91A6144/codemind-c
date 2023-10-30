#include <stdio.h>
int main()
{
    int Hf,Sf,SDf;
    scanf("%d%d%d",&Hf,&Sf,&SDf);
    if (Hf>50&&Sf>60&&SDf>100)
    {
        printf("10");
    }
    else if (Hf>50&&Sf>60&&SDf<100)
    {
        printf("9");
    }
    else if (Hf<50&&Sf>60&&SDf>100)
    {
        printf("8");
    }
    else if (Hf>50&&Sf<60&&SDf>100)
    {
        printf("7");
    }
    else if (Hf>50||Sf>60||SDf>100)
    {
        printf("6");
    }
    else 
    {
        printf("5");
    }
}