#include<stdio.h>
int main()
{
    int row,col,r,c,matA[100][100],max_sum,max_row;
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
    for(r=0 ; r<row ; r++)
    {
        int sum=0;
        for(c=0 ; c<col ; c++)
        {
            sum += matA[r][c];
        }
        if(sum>max_sum)
        {
            max_sum = sum;
            max_row=r+1;
        }
    }
    printf("Row %d with %d chocklets\n",max_row,max_sum);
    return 0;

}
