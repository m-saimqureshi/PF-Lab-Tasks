#include <stdio.h>

int main() {
 int age, marks;
    printf("Enter student age: ");
    scanf("%d", &age);
     printf("Enter student marks: ");
    scanf("%d", &marks);
    if (age>=18) {
        if (marks>=50) {
            printf("\nEligible for the admission");
        }
        else 
        printf("\nAdmission criteria not fulfilled");
    }
    
    return 0;
}
