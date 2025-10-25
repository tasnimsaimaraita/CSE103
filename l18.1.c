#include<stdio.h>
int main()
{
    int n,c=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    if(n==0)
    {
        c=1;
    }
    else
    {

        do
        {
            n=n/10;
            c++;
        }
        while(n !=0);
        }

    printf("Total digit:%d",c);
    return 0;

}
