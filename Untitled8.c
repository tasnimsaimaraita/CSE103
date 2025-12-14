#include<stdio.h>
void natural(int l,int u);
int main()
{
    int l, u;
    printf("Enter lower & upper limit: ");
    scanf("%d %d", &l, &u);
    natural(l,u);
    return 0;
}
void natural(int l,int u)
{
    printf("Natural nums between %d to %d\n",l,u);
    for(int i=l ; i<=u ; i++)
    {
        printf("%d ",i);
    }

}
