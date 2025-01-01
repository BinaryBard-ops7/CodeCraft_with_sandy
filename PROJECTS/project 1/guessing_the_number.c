// We will write a program that generates a random number and asks the player to guess it.
// If the player's guess is higher than the actual number, the program displays "Lower number please".
// Similarly, if the user's guess is too low, the program prints "Higher number please".
// When the user guesses the correct number, the program displays the number of guesses the player used to arrive at the number.
// Hint: Use loop & use a random number generator.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with the current time
    srand(time(0));

    int no_of_guesses = 0;
    int guessed;
    int random_number = rand() % 100 + 1;

    printf("Guess the number between 1 and 100\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guessed);

        if (guessed > random_number)
        {
            printf("Lower number please\n");
        }
        else if (guessed < random_number)
        {
            printf("Higher number please\n");
        }

        no_of_guesses++;
    } while (guessed != random_number);

    printf("You guessed the number in %d guesses YOU WIN! \n", no_of_guesses);

    return 0;
}
