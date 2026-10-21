#include <stdio.h>
int main (){
    float items[50];
    int a, i=0;
    float discount, total=0;
    do{
        
     printf("Enter price of item %d: ",i+1 );
    scanf("%f",&items[i]);
        total=total+items[i];
    printf("Do you want to add another item(1 = Yes, 0 = No): ");
    scanf("%d", &a);
        i++;
    }while(a!=0);
    for(i ; i <= 40; i++)
    {
        printf("*");
    }
   printf("\nSubtotal: %.2f",total);
    discount= (total>=10000)? 0.1*total : 0;
    printf("\nDiscount: %.2f", discount);
    total=total-discount;
    printf("\nFinal amount: %.2f",total );
 return 0;
}
