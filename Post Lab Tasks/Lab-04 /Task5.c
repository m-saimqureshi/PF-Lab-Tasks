// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num, square, cube;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    square=num*num;
    cube=num*num*num;
    printf("\nits square is %d\n", square);
    printf("its cube is %d", cube);
    
    return 0;
}
