#include <stdio.h>

int main()
{
    int pin = 2030;
    int intered_PIN;
    printf(" WELCOME TO KUBERA BANK:\n");

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
            
        }
    }


    float balance =10000;
    float withdrawal;
    printf("your initial balance is:%.2f\n", balance);
    
    while (balance>0)
    {
        printf("enter your amount you want to withdrawal\n");
        scanf("%f",&withdrawal);
        break;
    }
    if (withdrawal>balance)
    {
        printf("invalled funds!\n you can withdraw only till  %2f only jake kama be\n",balance);
        
    }
    else if (balance-=withdrawal)
    {
    printf("you withdraw amount successfully\n now ablable balance is %2f\n ", balance,withdrawal);

        printf("THANK YOU!!\n VISIT AGAIN");
    }
    
    
    
    
    return 0;
}
    
