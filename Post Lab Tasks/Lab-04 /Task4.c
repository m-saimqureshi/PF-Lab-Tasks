#include <stdio.h>

int main() {
    float l,w,A,P;
    printf("Length of rectangle= ");
    scanf("%f", &l);
    
    printf("Width of rectangle= ");
    scanf("%f", &w);
    
    A= l*w;
    printf("\nArea of rectangle= %.2f square units\n", A);
    P=2*(l+w);
    printf("Perimeter of rectangle= %.2f units", P);
    
    return 0;
}
