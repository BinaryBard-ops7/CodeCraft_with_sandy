//create a program thats allow the user to add items to shopping cart 
//and displays total cost untill the user decides to check out.
#include <stdio.h>
int main() {
    float price, total = 0.0;
    char choice;
    printf("WELCOME TO THE PARADISE SHOPPING CART!\n");
    while (1) {
        printf("\nEnter the price of the item: $");
        scanf("%f", &price);
        total += price;
        printf("Item added to cart. Current total: $%.2f\n", total);
        printf("Do you want to add another item? (y/n): ");
        scanf(" %c", &choice);
        if (choice == 'n' || choice == 'N') {
            break;
        }
    }
    printf("\nCheckout complete. Your total is $%.2f\n", total);
    printf("Thank you for shopping with us!\n");
    return 0;
}