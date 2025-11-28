#include<stdio.h>
int main()
{
    int A[3][3],B[3][3],C[3][3];
    int r,c;

    printf("Input elements in 3x3 matrix1:\n");
    for(r=0 ; r<3 ; r++)
    {
        for(c=0 ; c<3 ; c++)
        {
            scanf("%d",&A[r][c]);
        }
    }
    printf("Input elements in 3x3 matrix2:\n");
    for(r=0 ; r<3 ; r++)
    {
        for(c=0 ; c<3 ; c++)
        {
            scanf("%d",&B[r][c]);
        }
    }
    for(r=0 ; r<3 ; r++)
    {
        for(c=0 ; c<3 ; c++)
        {
            C[r][c]=A[r][c]+B[r][c];
        }
    }
    printf("Sum of both matrix:\n");
    for(r=0 ; r<3 ; r++)
    {
        for(c=0 ; c<3 ; c++)
        {
            printf("%d ",C[r][c]);
        }
        printf("\n");
    }
    return 0;

}
