#include <stdio.h>
int main (){
int appointment, doctorAvailable, registrationCompleted;
            printf("NOTE: YES=1 AND NO=0\n\n");
            printf("Do you have an appointment? ");
            printf("\nPatient: ");
            scanf("%d", &appointment);
             printf("Checking doctor's availibilty: ");
            scanf("%d", &doctorAvailable);
             printf("Registration completed or not: ");
            scanf("%d", &registrationCompleted);
if (appointment=1){
            if(doctorAvailable==1){
                        if(registrationCompleted==1){
                                    printf("You can meet the doctor");
                        }
            }   
            else
                        printf("You cannot meet the doctor");
}        
}
