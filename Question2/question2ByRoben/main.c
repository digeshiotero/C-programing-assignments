#include <stdio.h>
#include <stdlib.h>

int main()
{
    do
    {
        printf("Please enter your surname: ");
        scanf("%s", student_surname);

        printf("Please input your admission number: ");
        scanf("%d", &admission_number);

        printf("Please input your marks3. \nSubject 1: ");
        scanf("%d", &subject_1);
        printf("Subject 2: ");
        scanf("%d", &subject_2);
        printf("Subject 3: ");
        scanf("%d", &subject_3);

        subject_average = (subject_1 + subject_2 + subject_3)/3;
        printf("Subject average is: %.2lf", subject_average);

        print_Details(student_surname, admission_number, subject_average);

        printf("\nInput y to compute another's student marks or n to exit: ");
        scanf(" %c", &choice);
        printf("\n");
    }
}
