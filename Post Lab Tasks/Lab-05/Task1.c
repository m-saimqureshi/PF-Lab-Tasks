#include <stdio.h>
int main() {
float temp;
 printf("Enter the observed temperature (in °C): ");
 scanf("%f", &temp);
            printf("Weather: ");
   if (temp<=15) {
               printf("Cold");
   }
            else if (temp>=30){
                        printf("Hot");
            }
            else 
                        printf("Normal");
            return 0;
            
}
