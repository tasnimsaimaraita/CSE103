#include <stdio.h>

int main()
{
    int l, i;
    int b1, b2;
    int max, sum = 0;
    printf("Enter number of levels: ");
    scanf("%d", &l);

    for(i = 1; i <= l; i++)
    {
        printf("Level %d\n", i);

        printf("Enter chocolates in box 1: ");
        scanf("%d", &b1);

        printf("Enter chocolates in box 2: ");
        scanf("%d", &b2);

        if(b1 > b2)
            max = b1;
        else
            max = b2;

        printf("Max chocolates collected from this level = %d\n", max);

        sum=sum+max;
    }

    printf("\Total chocolates collected = %d\n", sum);

    return 0;
}
