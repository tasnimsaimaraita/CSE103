#include<stdio.h>
int main()
{
    int n,i;
    float s[10000],t[10000];

    printf("Enter number of employee:");
    scanf("%d",&n);

    printf("Enter salary:");
    for(i=0 ; i<n ; i++)
    {
        scanf("%f",&s[i]);
    }


    for(i=0 ; i<n ; i++)
    {
        if(s[i]<10000)

            t[i]=0;
        else if(s[i]<=20000)
            t[i]=s[i]*.10;
        else
            t[i]=s[i]*.20;
    }

    for(i=0 ; i<n ; i++)
    {
        printf("Employee %d: salary= %.2f , Tax= %.2f\n", i+1,s[i],t[i]);
    }
    return 0;
}
