// Create a C program that simulates a simple ATM withdrawal process.
//  The program should repeatedly ask the user to enter their
//   PIN until they enter the correct one.
//  Once the correct PIN is entered,
//   the program should display a message indicating successful access.

#include <stdio.h>

int main()
{
    int pin = 2030;
    int intered_PIN;
    printf(" WELCOME TO ATM:\n");

    while (1)
    {
        printf("enter your pin\n");
        scanf("%d", &intered_PIN);
        if (intered_PIN == pin)
        {
            

            printf("now you can grant access \n");
            break;
        }
        else
        {
            printf("  SORRY!\nyou cannot  access this account \n");
            printf("you entered incorrect password\n");
            break;
        }
    }

    
        return 0;
}