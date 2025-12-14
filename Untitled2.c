#include<stdio.h>
#include<math.h>

void diameter(int d);
void circumference(int c);
void area(int a);

int main()
{
    int r;
    scanf("%d",&r);
    diameter(r);
    circumference(r);
    area(r);
    return 0;
}
void diameter(int d)
{
    float dia=2*d;
    printf("Diameter is %.2f\n",dia);
}
void circumference(int c)
{
    float cir=2*M_PI*c;
    printf("Circumference is %.2f\n",cir);
}
void area(int a)
{
    float are=M_PI*a*a;
    printf("Area is %.2f\n",are);
}
