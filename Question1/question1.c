#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () 
{
    int rounds, lucky_number, remainder, count=1, total_score=0;
    /*Seeding the random number to the current time*/
    srand (time(0));
    /*Generating a random number between 1 and 9*/
    int secret_number= rand() % 10 + 1;

    printf("Enter The Number Of Rounds You Wish To Play: ");
    scanf("%d", &rounds);
     while(count<=rounds)
     {
        printf("Enter lucky number\n");
        scanf("%d", &lucky_number);
        remainder = lucky_number %secret_number;
        if (remainder == 0){
            printf("draw\n");
            total_score += 1;
        }
        else if (remainder %2 == 0){
            printf("win\n");
            total_score += 3;
        }
        else {
            printf("lose\n");
            total_score -= 3;
            }
            count= count + 1;

     }
     if (total_score>0){
        printf("Bingo! You have won the game with a total of %d\n",total_score);
     }
     else{
        printf("Oops! You lost the game with atotal of %d\n",total_score);

     }

    return 0;
}