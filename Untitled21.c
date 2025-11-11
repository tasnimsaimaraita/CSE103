#include <stdio.h>

int main() {
    int age, ticket;

    // Input age
    printf("Enter age: ");
    scanf("%d", &age);

    // Determine ticket price
    if (age < 12) {
        printf("ticket = 200\n");
    } else if (age >= 12 && age <= 59) {
        printf("ticket = 400\n");
    } else { // age >= 60
        printf("ticket = 250\n");
    }
    return 0;
}

