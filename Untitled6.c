#include<stdio.h>
int main()
{
    int matA[3][3],r,c,sum=0;

    printf("Enter the matrix:\n");
    for(r=0 ; r<3 ; r++)
    {
        for(c=0 ; c<3 ; c++)
        {
            scanf("%d",&matA[r][c]);
        }
    }

    for(r=0 ; r<3 ; r++)
    {
        sum +=matA[r][r];
    }
    printf("Sum of main diagonal elements : %d\n",sum);
    return 0;

}
