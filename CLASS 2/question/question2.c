#include <stdio.h>

int main()
{
    int pin = 2030;
    int intered_pin;

    while (1)
    {
        printf("enter your pin\n");
        scanf("%d", &intered_pin);
        if (pin == intered_pin)
        {
            printf("you can grant access\n");
        }
      
    }

    return 0;
}