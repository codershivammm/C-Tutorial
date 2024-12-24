#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));

    int randomNumber = (rand() % 100) + 1;
    int Guessed;
    int no_of_guess = 0;
    printf("Guess The Number:- \n");

    do
    {
        scanf("%d", &Guessed);
        if (Guessed > randomNumber)
        {
            printf("Lower Number Please\n");
        }
        else if (Guessed < randomNumber)
        {
            printf("Higher Number Please\n");
        }
        else{
            printf("Congratulations\n");
        }
        no_of_guess++;
    } while (Guessed != randomNumber);

    printf("You Guessed the number in %d Attempts", no_of_guess);

    return 0;
}