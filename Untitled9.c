#include<stdio.h>
void even(int l,int u);
int main()
{
    int l, u;
    printf("Enter lower & upper limit: ");
    scanf("%d %d", &l, &u);
    even(l,u);
    return 0;
}
void even(int l,int u)
{
    int sum=0;
    printf("sum of even number between %d to %d\n",l,u);
    for(int i=l ; i<=u ; i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }
    }
    printf("%d ",sum);

}
