#include <stdio.h>
int main (){
int page1, page2;
printf("Welcome to the ATM");
printf("\nPrerss a relevent key as per your requirement: ");
scanf("%d", &page1);
printf("\nPrerss a relevent key as per your requirement: ");
scanf("%d", &page2);
switch(page1){
            case 1:
                    switch(page2){
                        case 1:
                  printf("\nBalance Enquiry\nSavings Account");
                  break;
                        case 2:
                   printf("\nBalance Enquiry\nCurrent Account"); 
                                break;
            default:
            printf("\nInvalid Choice");
}
            break;
            case 2:
                   switch(page2){
                        case 1:
                  printf("\nCash Withdrawal\nSavings Account");
                  break;
                        case 2:
                   printf("\nCash Withdrawal\nCurrent Account");
                               break;
            default:
            printf("\nInvalid Choice");
                   }
            break;
            case 3:
                        switch(page2){
                        case 1:
                  printf("\nCash Deposit\nSavings Account");
                  break;
                        case 2:
                   printf("\nCash Deposit\nCurrent Account");
                                    break;
            default:
            printf("\nInvalid Choice");
                        }  
            break;
            case 4:
                    switch(page2){
                        case 1:
                  printf("\nPIN Change\nSavings Account");
                  break;
                        case 2:
                   printf("\nPIN Change\nCurrent Account");
                     break;
            default:
            printf("\nInvalid Choice");           
                    }
            break;
            default:
            printf("\nInvalid Choice");
}
}

