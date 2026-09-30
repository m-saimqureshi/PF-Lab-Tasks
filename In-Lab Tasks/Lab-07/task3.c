#include <stdio.h>

int main(){
    int num, cube;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        cube = num * num * num;
        printf("Cube= %d\n", cube);
        printf("Enter a number: ");
        scanf("%d", &num);
    }
    printf("Program stopped.");
    return 0;
}
