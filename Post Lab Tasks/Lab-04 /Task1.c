// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float p, a;
    
    printf("Enter percentage: ");
    scanf("%f", &p);
    printf("Family income: ");
    scanf("%f", &a);
    
    if (p>=80 || a<=50000) {
        printf("\nStudent is eligible for the scholarship");
    }
    else
        printf("\nStudent is ineligible for the scholarship");
        
    return 0;
}
