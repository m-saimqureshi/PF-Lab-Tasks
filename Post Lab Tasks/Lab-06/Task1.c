#include <stdio.h>

int main() {
    int r=50000, w, count=0;
    do {
    printf("Enter withdrwal amount: ");
    scanf("%d", &w);
    r=r-w;
    count=count+1;
 
    }while(w>0 && r>0);
    
     for(int i = 1; i <= 30; i++) {
        printf("*");
    }
    (w<=r)?  printf("\nRemaining balance: %d", r) : printf("\nYou can withdraw upto %d only",r+w);

    printf("\nNumber of withdrawls: %d", count-1);
  
    return 0;
}
