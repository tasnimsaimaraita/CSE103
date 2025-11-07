#include <stdio.h>
int main() {
    int n1, n2, i, j, a[50], b[50], c[100];

    printf("Enter n1: ");
    scanf("%d", &n1);
    printf("Enter elements of n1:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter n2: ");
    scanf("%d", &n2);
    printf("Enter elements of n2:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);


    for(i = 0; i < n1; i++)
        c[i] = a[i];
    for(j = 0; j < n2; j++)
        c[i + j] = b[j];

    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++)
        printf("%d ", c[i]);

    return 0;
}
