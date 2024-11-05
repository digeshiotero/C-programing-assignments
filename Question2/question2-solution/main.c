#include <stdio.h>
#include <stdlib.h>

int main()
{
    do{
        printf("Enter the following:\n");
        //Admission number
        printf("Admission Number: ");
        scanf("%d", &admission_number);
        //student surname
        printf("Surname: ");
        scanf("%s", &surname);
        //3 subject marks
        printf("Enter 3 subject marks:\n");
        scanf("%d%d%d", &subject1, &subject2, &subject3);

        average_marks = (subject1 + subject2 + subject3);

        if(average_marks >= 70 && average_marks <= 100){
            printf("Your grade is A\n");
        } else if(average_marks >= 60 && average_marks <= 69){
            printf("Your grade is B\n");
        } else if(average_marks >= 50 && average_marks <= 59){
            printf("Your grade is C\n");
        } else if(average_marks >= 40 && average_marks <= 49){
            printf("Your grade is D\n");
        } else{
            printf("Your grade is E\n");
        }

        printf("Enter Y to continue to add another student and N to stop the process: ");
        scanf("%c", &choice);
    } while(choice == 'Y' || choice == 'y');



}
