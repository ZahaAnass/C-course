#include <stdio.h>
#include <string.h>

int main() {
    // SHOPPING CART PROGRAM
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    // 
    item[strlen(item) - 1] = '\0';
    // Remove newline character if present
    item[strcspn(item, "\n")] = 0;

    printf("What is the price for each?: ");
    scanf("%f", &price);

    printf("How many would you like?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou have bought %d %s\n", quantity, item);
    item[strcspn(item, "\n")] = 0;
    printf("Total for %s: %c%.2f\n", item, currency, total);
    

    return 0;
}
