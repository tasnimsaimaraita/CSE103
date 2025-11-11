#include<stdio.h>
int main(){
    float days,hours,weeks,months;

    printf("Enter days:");
    scanf("%f",&days);

    hours=days*24;
    weeks=days/7;
    months=days/30;

    printf("%.2f hours\n",hours);
    printf("%.2f weeks\n",weeks);
    printf("%.2f months",months);
    return 0;
}
