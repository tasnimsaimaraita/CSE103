#include<stdio.h>
int main(){
    float minutes,hours,days;

    printf("Enter minutes:");
    scanf("%f",&minutes);

    hours=minutes/60;
    days=hours/24;


    printf("%.2f hours\n",hours);
    printf("%.2f days\n",days);

    return 0;
}

