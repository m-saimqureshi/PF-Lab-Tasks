// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char name[40];
    printf("Use of fgets: ");
    printf("\nEnter student full name: ");
    fgets(name, sizeof(name), stdin);
    
    puts("student reistered name is: ");
    puts(name);
    
    printf("\nLimitation of scanf:-\n");
    
    printf("Enter yuor full name:");
    scanf("%s", name);
    
    printf("student reistered name is: ");
    printf("%s", name);
    
    return 0;
}
