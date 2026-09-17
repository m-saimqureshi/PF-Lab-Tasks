#include <stdio.h>
int main() {
    int dep, sec;
 printf("Which department you want to choose?");
    printf("\nUser: ");
    scanf("%d", &dep);
     printf("Which section you want to choose?");
    printf("\nUser: ");
    scanf("%d", &sec);
    switch(dep) {
        case 1:
        printf("Computer Science-");
        break;
        case 2:
        printf("Information Technology-");
        break;
        case 3:
        printf("Artificial Intelligence-");
        break;  
        default:
            printf("Invalid choice");
        }
    switch(sec) {
        case 1:
        printf("Section A");
        break;
        case 2:
        printf("Section B");
        break;
        default:
            printf("Invalid choice");
    }
    return 0;
}
