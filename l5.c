#include<Stdio.h>

int main()
{
    int i,a,b;
    for(i=1 ; i<=100 ; i++)
    {
        printf("a:");
        scanf("%d",&a);
        if(a != -1)
        {
            printf("b:");
            scanf("%d",&b);
            int sum =a+b;
            printf("%d \n",sum);
        }
        else
        {
            break;
        }

    }

}
