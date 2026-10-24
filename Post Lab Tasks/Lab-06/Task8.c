#include <stdio.h>
int main(){
	float productPrice[5];
	float total=0, discount, finalAmount;
	int i;
	for( i=0; i<5; i++){
		printf("Enter price of product %d: ", i+1);
		scanf("%f", &productPrice[i]);
		total=total+productPrice[i];
	}
	discount = (total>10000)? total*0.1 : 0 ;
	finalAmount = total - discount;
	
	printf("\nSubtotal: %.2f",total );
	printf("\nDiscount: %.2f",discount );
	printf("\nFinal Amount: %.2f", finalAmount );
	return 0;
}
