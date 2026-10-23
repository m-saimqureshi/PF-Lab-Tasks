#include <stdio.h>
int main(){
	int i, code, atmt=0, rem_atmt=3;
	for( i=1; i<4; i++){
	printf("Enter PIN: ");
	scanf("%d", &code);
	if(code!=1234){
		atmt=atmt+1;
		rem_atmt=rem_atmt-1;
		printf("Login attempts done: %d", atmt);
		printf("\nRemaining attempts: %d\n", rem_atmt);
    }
	else{
        	printf("\nLogin successful");
        return 0;
    }

	}
	printf("\nLogin Failed--Account locked");
    
    return 0;
}
