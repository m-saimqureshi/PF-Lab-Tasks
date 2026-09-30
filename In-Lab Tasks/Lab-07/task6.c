#include <stdio.h>
int main(){
    int count = 0;
    float amount, total = 0;

    printf("Enter amount saved: ");
    scanf("%f", &amount);

    while(amount > 0)
    {
        total = total + amount;
        count++;

        printf("Enter amount saved: ");
        scanf("%f", &amount);
    }

    printf("\nTotal savings = %.2f", total);
    printf("\nNumber of deposits = %d", count);

    return 0;
}
