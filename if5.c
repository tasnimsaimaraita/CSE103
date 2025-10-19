#include<stdio.h>
int main()
{
    int x;
    printf("Enter x:");
    scanf("%d",&x);
    if(x%4==0 && x%100!=0 || x%400==0)
    {
        printf("Leap year");
    }
    else
    {
        printf("Normal year");
    }
    return 0;
}


