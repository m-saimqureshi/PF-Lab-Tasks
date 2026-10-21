#include <stdio.h>
int main (){
    int count=0;
    float amount, balance=0;
    do{
     printf("Enter recharge amount: ");
    scanf("%f",&amount);
        count=count+1;
        if(amount>=5000){
            printf("Recharge limit exceeded\n");
            break;
        }

    balance=balance+amount;
    }while(amount>0);
    for(int i = 1; i <= 30; i++){
        printf("*");
    }
    printf("\nTotal recharge amount: %.2f",balance);
    printf("\nNumber of deposits: %d", count-1);
 return 0;
}
