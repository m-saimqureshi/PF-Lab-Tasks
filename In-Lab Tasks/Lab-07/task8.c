#include <stdio.h>
int main(){
    int salary[6];
    int i, count = 0;

    for(i = 0; i < 6; i++)
    {
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%d", &salary[i]);
    }
    printf("\nEmployee Salaries:\n");

    for(i = 0; i < 6; i++)
    {
        printf("Employee %d: %d\n", i + 1, salary[i]);

        if(salary[i] > 50000){
            count++;
        }
    }
    printf("\nEmployees with salary greater than 50000 = %d", count);
    return 0;
}
