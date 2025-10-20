#include<stdio.h>

int main()
{
    int a,b,c,d,e;
    printf("Enter the values:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    float s=(a+b+c+d+e)/5;
    printf("Percentage: %.2f\n",s);

    if(s>=90)
    {
        printf("Grade A");
    }
    else if(s>=80)
    {
        printf("Grade B");
    }
    else if(s>=70)
    {
        printf("Grade C");
    }
    else if(s>=60)
    {
        printf("Grade D");
    }
    else if(s>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
    return 0;
}
