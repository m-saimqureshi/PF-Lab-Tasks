#include <stdio.h>

int main(){
    float marks[50], total=0, avg;
    int count=0, i=-1;
    do{
        i++;
    printf("Enter marks of student %d: ",i+1 );
    scanf("%f", &marks[i]);
    count=count+1;
    total=total+marks[i];
        
    }while(marks[i]>=0 && marks[i]<=100);
    
    avg=total/count;
     for(i ; i <= 30; i++)
    {
        printf("*");
    }

    printf("\nTotal marks: %.2f",total);
    printf("\nTotal Students Recorded: %d", count);
    printf("\nAverage marks: %.2f", avg);
    return 0;
}
