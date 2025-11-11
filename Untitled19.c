#include <stdio.h>

int main()
{
    int units;
    float bill;

    printf("Enter the number of units used: ");
    scanf("%d", &units);

    if (units > 300)
    {
        bill = units * 8;
    }
    else if (units >= 200 && units <= 300)
    {
        bill = units * 6;
    }
    else if(units <200) // units less than 200
    {
        bill = units * 5;
    }

    printf("Total Bill: %.2f Taka\n", bill);

    return 0;
}

