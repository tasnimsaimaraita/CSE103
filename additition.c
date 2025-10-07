#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two integer numbers:");
    scanf("%d %d", &a,&b);
    printf("your input is: %d %d\n",a,b);

    int c=a+b;
    printf("sum: %d",c);
    return 0;
}
