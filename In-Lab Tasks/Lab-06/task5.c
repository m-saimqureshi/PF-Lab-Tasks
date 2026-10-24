#include <stdio.h>
int main()
{
    float temp, total = 0;
    int i, count = 0;

    for(i = 1; i <= 7; i++) {
        printf("Enter temperature for day %d: ", i);
        scanf("%f", &temp);
        total = total + temp;

        if(temp > 100) {
            count++;
        }
    }
    printf("\nTotal temperature = %.2f", total);
    printf("\nTemperatures greater than 100 = %d", count);

    return 0;
}
