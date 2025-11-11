#include<stdio.h>
int main()
{
    float u,b;
    printf("Enter electricity units:\n");
    scanf("%f",&u);

    if(u<=100)
    {
        b=u*5;
    }
    else if(u<=200)
    {
        b=100*5+(u-100)*7;
    }
    else
    {
        b=100*5+100*7+(u-200)*10;
    }
    printf("Total bill: %.2f",b);
    return 0;
}
