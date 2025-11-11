#include<stdio.h>
int main()
{
    double act_amount,dis_amount;
    printf("Enter actual amount:\n");
    scanf("%lf",&act_amount);

    if(act_amount>=2000)
    {
        dis_amount=act_amount-(act_amount*.30);
    }
    else if(act_amount>=1000)
    {
        dis_amount=act_amount-(act_amount*.20);
    }
    else
    {
        dis_amount=act_amount;
    }
    printf("Amount after discount:\n%.2f",dis_amount);
    return 0;
}
