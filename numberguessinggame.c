/*
Declare variable
while loop for the game (choice 1 and 2)
Ask for choices
Generate number to guess
Compare numbers and see if game is won
If game is won, go back to choices
If 3 is entered, while loop stops
Game ends
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    char choice = 0;
    int n;
    char input[] = "a";
    char *end;
    char q[] = "q";
    int max = 10;
    int numberOfGuesses = 0;
    int numberOfWins = 0;
    int arrayGuesses[1000];
    int guesses = 0;

    while(choice!= 3)
    {
        a: printf("\nPress 1 to play a game\n");
        printf("Press 2 to change the max number\n");
        printf("Press 3 to quit\n");
        printf("Enter a choice: ");
        scanf("%d", &choice);
        getchar();
        srand(time(0));
        int guess = (rand()%max) + 1;

        if(choice == 1)
        {
            b:printf("\nEnter a guess: ");
            scanf(" %s", &input);
            int result;
            result = strcmp (input, q);
            if(result == 0)
            {
                continue;
            }
            else
            {
                n = strtol(input, &end, 10);
                if(n == guess)
                {
                    printf("Correct, you won!\n");
                    numberOfWins++;
                    numberOfGuesses++;
                    arrayGuesses[guesses] = numberOfGuesses;
                    numberOfGuesses = 0;
                    guesses++;
                }

                else if(n < guess)
                {
                    printf("Guess is too low\n");
                    numberOfGuesses++;
                    goto b;
                }
                else
                {
                    printf("Guess is too high\n");
                    numberOfGuesses++;
                    goto b;
                }
            }
        }
        else if(choice == 2)
        {
            c: 
            printf("\nCurrent max value: %d/n", max);
            printf("Enter a new max value (from 0 to 10): ");
            scanf("%d", & max);
            if(max > 0 && max <= 10)
            {
                printf("Max value changed to: %d\n", max);
            }
            else
            {
                printf("Invalid number, please enter a number from 0 to 10");
                goto c;
            }
        }
    }
    printf("\nResults:\n");
    for (int i = 0; i < numberOfWins; i++)
    {
        printf("Game %d: %d guesses\n", i + 1, arrayGuesses[i]);
    }
    printf("\nThank you for playing.");
    return 0;
}
