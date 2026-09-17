#include <stdio.h>

int main() {
    int a,b;
    printf("(NOTE: YES=1 and NO=0)\n");
    printf("Do you have a CNIC? ");
    printf("\nUser: ");
    scanf("%d",&a);
    printf("Did you pass the driving test?");
    printf("\nUser: ");
    scanf("%d", &b);
    if (a==1) {
        if (b==1){
            printf("You are eligible for DRIVING LICENSE.");
        }
        else 
            printf("You are not eligible for DRIVING LICENSE.");
    }
    return 0;
}
