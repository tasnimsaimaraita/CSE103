#include<stdio.h>
int main()
{
    int n,i,c=0,a[1000];
    int even=0, odd=0;
    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0 ; i<n ; i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even numbers:%d\n",even);
    printf("Odd numbers:%d\n",odd);
    return 0;
}
