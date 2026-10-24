#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{   printf("HERE IT IS THE NUMBER GUESSING GAME\n");
    int num;

    srand(time(0));

    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guesses;
    
    do
    {
        printf("Guess the Number : ");
        scanf("%d", &guesses);
        no_of_guesses++;
        if(guesses<randomNumber){
            printf("go for a higher one\n");
        }
        else if(guesses>randomNumber){
            printf("go for a lower one\n");
        }
        else{
            printf("GREAT!!!!");
        }
    } while (guesses != randomNumber);
    printf("you guessed the number in %d guesses", no_of_guesses);
    return 0;
}