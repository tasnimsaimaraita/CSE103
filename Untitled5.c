#include<Stdio.h>
#define size 3
int main()
{
    int A[size][size],B[size][size];
    int r,c,equal=1;

    printf("Input elements of matrix1:\n");
    for(r=0 ; r<size ; r++)
    {
        for(c=0 ; c<size ; c++)
        {
            scanf("%d",&A[r][c]);
        }
    }
    printf("Input elements of matrix2:\n");
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
            if(A[r][c] != B[r][c])
            {
                equal=0;
                break;
            }
        }
    }
    if(equal)
        printf("Both matrices are equal\n");
    else
        printf("Both matrices are not equal\n");
    return 0;
}
