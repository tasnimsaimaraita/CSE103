#include<stdio.h>
#define size 3
int main()
{
    int A[size][size],B[size][size],C[size][size];
    int r,c;

    printf("Input elements in 3x3 matrix1:\n");
    for(r=0 ; r<size ; r++)
    {
        for(c=0 ; c<size ; c++)
        {
            scanf("%d",&A[r][c]);
        }
    }
    printf("Input elements in 3x3 matrix2:\n");
    for(r=0 ; r<size ; r++)
    {
        for(c=0 ; c<size ; c++)
        {
            scanf("%d",&B[r][c]);
        }
    }
    for(r=0 ; r<size ; r++)
    {
        for(c=0 ; c<size ; c++)
        {
            C[r][c]=A[r][c]-B[r][c];
        }
    }
    printf("Difference of both matrix:\n");
    for(r=0 ; r<size ; r++)
    {
        for(c=0 ; c<size ; c++)
        {
            printf("%d ",C[r][c]);
        }
        printf("\n");
    }
    return 0;

}

