#include<stdio.h>
int main()
{
    int row,col,r,c,A[100][100];

    printf("Enter no of row and column:\n");
    scanf("%d %d",&row,&col);

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
        int rowsum=0;
        for(c=0 ; c<col ; c++)
        {
            rowsum += A[r][c];
        }
        printf("Sum of row %d = %d\n", r+1,rowsum);
    }
    for(c=0 ; c<col ; c++)
    {
        int colsum=0;
        for(r=0 ; r<row ; r++)
        {
            colsum += A[r][c];
        }
        printf("Sum of column %d = %d\n", c+1,colsum);
    }
    return 0;
}
