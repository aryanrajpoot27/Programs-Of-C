#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, nguess = 0;
    srand(time(0));
    number = rand() % 100 + 1; 

    printf("Number is %d\n", number);
    do
    {
        printf("Guess a number between(1-100)\n");
        scanf("%d", &guess);
        if (guess < number)
        {
            printf("Higher Number Please\n");
        }
        else if (guess > number)
        {
            printf("Lower Number Please\n");
        }
     
        else if (guess == number)
        {

            printf("You Guessed the number in %d attempts", nguess);
        }
        nguess++;
    }

    while (guess != number);

    return 0;
}
