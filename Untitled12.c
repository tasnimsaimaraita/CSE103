#include<Stdio.h>

int main()
{
    int n,f,l;
    printf("Enter any value:");
    scanf("%d",&n);

    l=n%10;
    f=n;
    while(f>=10)
    {
        f=f/10;
    }
    int sum =f+l;
    printf("sum of First & last digit %d\n",sum);
    return 0;
}
