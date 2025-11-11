#include<stdio.h>
int main(){
    float days,hours,minutes,year;

    printf("Enter year:");
    scanf("%f",&year);

    days=year*365;
    hours=days*24;
    minutes=hours*60;

    printf("%.2f days",days);
    printf("%.2f hours\n",hours);
    printf("%.2f minutes\n",minutes);

    return 0;
}

