#include<Stdio.h>
int main()
{
    int row,col,r,c,A[100][100],flag=1;

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
        for(c=0 ; c<col ; c++)
        {
            if(A[r][c] != A[r][c])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            break;
    }
    if(flag)
        printf("The given matrix is Symmetric matrix\n");
    else
        printf("The given matrix is not Symmetric matrix\n");

    return 0;
}
