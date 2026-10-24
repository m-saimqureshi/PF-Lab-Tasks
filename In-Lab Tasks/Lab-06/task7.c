#include <stdio.h>
int main(){
    char food[50];
    float price, total = 0;
    int choice, count = 0;

    do
    {
        printf("Enter food item: ");
        scanf(" %49[^\n]", food);

          printf("Enter price: ");
          scanf("%f", &price);

        total = total + price;
        count++;

        printf("Order another item? (1=Yes, 0=No): ");
        scanf("%d", &choice);

    } while(choice==1);

    printf("\nTotal bill = Rs. %.2f", total);
    printf("\nItems ordered = %d", count);
    return 0;
}
