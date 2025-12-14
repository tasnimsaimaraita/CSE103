#include <stdio.h>

void primenum(int p1, int p2);

int main()
{
    int n1, n2;
    printf("Enter lower & upper limit: ");
    scanf("%d %d", &n1, &n2);

    primenum(n1, n2);
    return 0;
}

void primenum(int p1, int p2)
{
    int i, j, isPrime;

    for (i = p1; i <= p2; i++)
    {
        if (i <= 1)
            continue;

        isPrime = 1;

        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }
}
