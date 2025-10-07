#include<stdio.h>
int main()
{
    int base,height;
    printf("Enter base and height:");
    scanf("%d %d", &base,&height);
    float area=(0.5*(base*height));
    printf("Area of triangle: %f",area);
    return 0;
}
