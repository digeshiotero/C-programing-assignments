#include <stdio.h>
#include <stdlib.h>
#include <mathlib.h>

int main() {
    int n, i;
    float credit_limit, price, quantity, total_cost;

    // Get the number of customers
    printf("Enter the number of customers: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\nCustomer %d\n", i);

        // Get the credit limit, item price, and quantity
        printf("Enter credit limit: ");
        scanf("%f", &credit_limit);
        printf("Enter item price: ");
        scanf("%f", &price);

        while (1) {
            printf("Enter quantity: ");
            scanf("%f", &quantity);

            // Calculate total cost
            total_cost = price * quantity;

            // Check if total cost is within credit limit
            if (total_cost > credit_limit) {
                printf("Sorry, you cannot purchase goods worth such a value on credit.\n");
            } else {
                printf("Thank you for purchasing from us.\n");
                printf("The value of your purchase is: %.2f\n", total_cost);
                break;  // Exit the loop if purchase is valid
            }
        }
    }

    return 0;
}
