#include<stdio.h>
int main()
{
    int num,row,col,r,c,matA[100][100];
    printf("Enter no of row and column:\n");
    scanf("%d %d",&row,&col);

    printf("Enter the matrix:\n");
    for(r=0 ; r<row ; r++)
    {
        for(c=0 ; c<col ; c++)
        {
            scanf("%d",&matA[r][c]);
        }
    }
    printf("enter a number to multiply with matrix:\n");
    scanf("%d",&num);

    for(r=0 ; r<row ; r++)
    {
        for(c=0 ; c<col ; c++)
        {
            matA[r][c] = num * matA[r][c];
        }
    }

    printf("New matrix is :\n");
    for(r=0 ; r<row ; r++)
    {
        for(c=0 ; c<col ; c++)
        {
            printf("%d ",matA[r][c]);
        }
        printf("\n");
    }
    return 0;

}
