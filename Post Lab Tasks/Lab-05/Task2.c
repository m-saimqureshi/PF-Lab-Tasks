#include <stdio.h>
int main() {
int bal;
 printf("Enter  remaing blance: ");
 scanf("%d", &bal);
            printf("Category: ");
   if (bal<500) {
               printf("Low");
   }
            else if (bal>=2000){
                        printf("Premium");
            }
            else 
                        printf("Sufficient");
            return 0;
            
}
