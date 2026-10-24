#include <stdio.h>
int main()
{
    int marks[100], choice, count = 0, i;

    do
    {
        if(count == 100){
            printf("Maximum students reached.\n");
            break;
        }
        printf("Enter student marks: ");
        scanf("%d", &marks[count]);
        count++;

        printf("Do you want to enter more marks? (1=Yes, 0=No): ");
        scanf("%d", &choice);

    } while(choice == 1);

    printf("\nMarks entered:\n");

    for(i = 0; i < count; i++)
    {
        printf("%d\n", marks[i]);
    }

    printf("Total students = %d", count);

    return 0;
}
