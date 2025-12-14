#include<stdio.h>
void even(int e);
int main()
{
    int n;
    printf("Enter any input:");
    scanf("%d",&n);
    even(n);
    return 0;
}
void even(int e)
{
    if(e%2==0)
    {
        printf("%d is even",e);
    }
    else
    {
        printf("%d is odd",e);
    }
}
