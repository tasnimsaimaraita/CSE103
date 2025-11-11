#include<stdio.h>
int main()
{
    int a,c;
    float i;
    char e;

    printf("Enter age:\n");
    scanf("%d",&a);

    printf("Enter income:\n");
    scanf("%f",&i);

    printf("age you employed (Y/N):\n");
    scanf(" %c",&e);

    printf("Enter credit(0-100):\n");
    scanf("%d",&c);


    if(a>=21 && i>=20000 && (e=='Y' || e=='y') && c>=70)
    {
        printf("CONGO!! You are eligible for a bank loan.\n");
    }
    else
    {
        printf("SORRY!! You are not eligible for a bank loan.");
    }
    return 0;
}

