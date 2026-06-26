#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number, guess, attempt=0;

    srand(time(0));
    number=rand()%100+1;

    printf("===== Number Guessing Game =====\n");
    printf("I have chosen a number between 1 and 100.\n");

    do{
        printf("Enter your guess: ");
        scanf("%d",&guess);

        attempt++;

        if(guess>number){
            if(guess-number>10)
                printf("Too High!\n");

            else
                printf("High!\n");
        }
        else if(guess<number){
            if(number-guess>10)
                printf("Too Low!\n");

            else
                printf("Low!\n");
        }
        else{
            printf("CONGRATULATIONS! You guessed it right.");
        }

    }while(guess!=number);

    printf("You guessed it in %d attempts.\n", attempt);

    return 0;
}