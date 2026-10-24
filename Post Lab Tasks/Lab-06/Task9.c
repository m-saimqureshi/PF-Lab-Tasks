#include <stdio.h>
int main (){
	int units[5]; 
	int i, total=0, maxUnits=-1, minUnits=9999;
	float bill[5], amountCollected=0;
	for(i=0; i<5; i++){
		printf("Units consumed by household %d: ", i+1);
		scanf("%d",&units[i] );
		bill[i]=10*units[i];
		if(bill[i]>5000){
			bill[i]+=0.05*bill[i]; //5% surcharge
		}
		total+=units[i];
		if(units[i]>maxUnits){
			maxUnits=units[i];
		}
		if(units[i]<minUnits){
			minUnits=units[i];
		}
			
	}

	printf("\nTotal units consumed  : %d",total );
	printf("\nMinimum units consumed: %d",minUnits );
	printf("\nMaximum units consumed: %d",maxUnits );
	printf("\n\nFINAL BILL OF INDIVISUAL HOUSEHOLDS");
	for(i=0; i<5; i++){
		printf("\nHousehold %d: %.2f",i+1,bill[i] );
		amountCollected+=bill[i];	
	}
	printf("\nTotal amount collected: %.2f", amountCollected);
	return 0;
}
