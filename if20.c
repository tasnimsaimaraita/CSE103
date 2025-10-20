#include<stdio.h>

int main()
{
    float s,gs;
    printf("enter the basic salary:");
    scanf("%f",&s);
    if(s<=10000)
    {
        gs=s+(s*0.20)+(s*0.80);
        printf("Gross salary: %.2f\n",gs);
    }
    else if(s>=10001 && s<=20000)
    {
        gs=s+(s*0.25)+(s*0.90);
        printf("Gross salary: %.2f\n",gs);
    }
    else
    {
        gs=s+(s*0.30)+(s*0.95);
        printf("Gross salary: %.2f\n",gs);
    }

    return 0;
}
