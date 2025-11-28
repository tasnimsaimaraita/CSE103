#include<stdio.h>

int main()
{
    int row,col,r,c,matA[100][100];
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
    printf("Transpose matrix is:\n");
    for(c=0 ; c<col ; c++)
    {
        for(r=0 ; r<row ; r++)
        {
            printf("%d ",matA[r][c]);
        }
        printf("\n");
    }
    return 0;
}
