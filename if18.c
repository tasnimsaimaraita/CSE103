#include<stdio.h>
int main()
{
    int cp,sp;
    printf("enter the value of cp & sp:");
    scanf("%d%d",&cp,&sp);
    int p=sp-cp;
    int l=cp-sp;
    if(sp>cp)
    {
        printf("profit= %d",p);
    }
    else if(cp>sp)
    {
        printf("loss= %d",l);
    }
    else
    {
        printf("No profit or no loss");
    }
    return 0;
}
