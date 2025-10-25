#include<stdio.h>

int main()
{
    int i=1,a,b;
    while(i<=100)
    {
        printf("a:");
        scanf("%d",&a);
        if(a != -1)
        {
            printf("b:");
            scanf("%d",&b);
            int sum = a+b;
            printf("%d \n",sum);
            i++;
        }
        else
            break;
    }
    return 0;
}
