#include <stdio.h>
int main(){
	int stdMarks[5];
	int i, total=0, highest=-999, lowest=999;
	float avg;
	for(i=0; i<5;i++){
    printf("Enter marks of student %d: ",i+1);
    scanf("%d", &stdMarks[i]);
    total=total+stdMarks[i];
    
	if(stdMarks[i]>highest){
	highest=stdMarks[i];
		}
	if(stdMarks[i]<lowest){
		lowest=stdMarks[i];
		}
	}
    avg=total/5;
    printf("\nOVERALL CLASS RECORD");
    printf("\nTotal marks: %d",total );
    printf("\nAverage marks: %.2f",avg );
    printf("\nHighest marks: %d", highest);
    printf("\nLowest marks: %d", lowest);
    return 0;
}
