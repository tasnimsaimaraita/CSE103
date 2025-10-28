#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter the value: ");
    scanf("%d",&x);
    y=1;
    for(int i=1;i<=x;i++){
        y*=i;
    }
    printf("factorial of %d is: %d",x,y);
    return 0;
}
