#include<stdio.h>
int main()
{
    int a,i;
    char e;
    printf("Enter age:\n");
    scanf("%d",&a);

    printf("Enter income:\n");
    scanf("%d",&i);

    printf("Are you employed:\n");
    scanf(" %c",&e);

    if(a>=21 && i>=20000 && (e=='y' || e=='Y'))
    {
        printf("Congratulations! You are eligible for a bank loan.");
    }
    else
    {
        printf("sorry!! You are not eligible for a bank loan.");
    }
    return 0;
}
