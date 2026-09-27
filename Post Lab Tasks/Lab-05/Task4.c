#include <stdio.h>

int main()
{
    int restaurantOpen, itemAvailable, balanceSufficient;
   printf("Note: 1 = Yes, 0 = No");
    printf("\n\nIs the restaurant open? : ");
    scanf("%d", &restaurantOpen);

    printf("Is the selected item available? : ");
    scanf("%d", &itemAvailable);

    printf("Is the balance sufficient? : ");
    scanf("%d", &balanceSufficient);

    if (restaurantOpen == 1)
    {
        if (itemAvailable == 1)
        {
            if (balanceSufficient == 1)
            {
                printf("\nOrder placed successfully.");
            }
            else
            {
                printf("\nOrder cannot be placed because balance is insufficient.");
            }
        }
        else
        {
            printf("\nOrder cannot be placed because the item is not available.");
        }
    }
    else
    {
        printf("Order cannot be placed because the restaurant is closed.");
    }
}
