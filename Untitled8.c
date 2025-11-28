#include<stdio.h>
int main()
{
    int row,col,r,c,A[100][100],temp;

    printf("Enter no of row and column:\n");
    scanf("%d %d",&row,&col);

    if(row != col)
    {
        printf("Matrix must be square to interchange diagonals.\n");
        return 0;
    }

    printf("Enter the matrix:\n");
    for(r=0 ; r<row ; r++)
    {
        for(c=0 ; c<col ; c++)
        {
            scanf("%d",&A[r][c]);
        }
    }

    for(r=0 ; r<row ; r++)
    {
        temp = A[r][r];
        A[r][r] = A[r][c-1-r];
        A[r][c-1-r] = temp;
    }
    printf("Matrix after interchanging its diagonal:\n");
    for(r=0 ; r<row ; r++)
    {
        for(c=0 ; c<col ; c++)
        {
            printf("%d ",A[r][c]);
        }
        printf("\n");
    }
    return 0;
}
