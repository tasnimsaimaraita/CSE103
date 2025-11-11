#include<Stdio.h>
int main()
{
    float h,w,BMI;

    printf("Enter h:\n");
    scanf("%f",&h);

    printf("Enter w:\n");
    scanf("%f",&w);

    BMI=w/(h*h);

    if(BMI<18.5)
    {
        printf("Underweight");
    }
    else if(18.5<=BMI<25)
    {
        printf("Normal weight");
    }
    else if(25<=BMI<30)
    {
        printf("Overweight");
    }
    else
    {
        printf("Obese");
    }
    return 0;
}
