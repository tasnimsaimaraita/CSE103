#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float x,y,d;
    printf("Enter the value of x,y,z:");
    scanf("%d%d%d",&a,&b,&c);

    d=pow(b,2)-(4*a*c);

    if(d>0)
    {
        x = ((-b)+sqrt(d))/(2*a);
        y = ((-b)-sqrt(d))/(2*a);
        printf("X= %.2f\n",x);
        printf("y= %.2f\n",y);
    }
    else if(d==0)
    {
        x=y=(-b)/(2*a);
        printf("X= %.2f\n",x);
        printf("Y= %.2f\n",y);
    }
    else
    {
        x = (-b)/(2*a);
        y = sqrt(-d)/(2*a);
        printf("X= %.2f\n",x);
        printf("Y= %.2f\n",y);
    }

    return 0;
}
