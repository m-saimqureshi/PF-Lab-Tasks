// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int days;
    
    printf("Enter number of late days: ");
    scanf("%d", &days);
    
    if (days==0) {
        printf("No fine");
    }
    else if (days<=5) {
        printf("Fine: Rs. 50");
    }
    else if (days<=10) {
        printf("Fine: Rs. 100");
    }
    else
        printf("Fine: Rs. 200");
        
    return 0;
}
