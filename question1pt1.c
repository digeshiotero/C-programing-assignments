#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () 
{
    int rounds, lucky_number, remainder, count=1, total_score=0;
    srand (time(0));
    int secret_number= rand() % 100 + 1;

    printf("Enter the Number of Rounds You Wish to Play: ");
    scanf("%d", &rounds);

    return 0;
}