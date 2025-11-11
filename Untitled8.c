#include<stdio.h>
int main()
{
    float hours,days,weeks,months;
    printf("Enter Hours:");
    scanf("%f",&hours);

    days=hours/24;
    weeks=days/7;
    months=days/30;

    printf("%.2f days\n",days);
    printf("%.2f weeks\n",weeks);
    printf("%.2f months",months);

    return 0;
}
