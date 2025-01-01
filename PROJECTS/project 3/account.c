// simulate a bank account where the user can withdraw money untill,
// the balance is become 0
#include <stdio.h>

int main(){
    float balance =10000;
    float withdrawal;
    printf("welcome to bank !!\n");
    printf("your initial balance is:%.2f\n", balance);
    
    while (balance>0)
    {
        printf("enter your amount you want to withdrawal\n");
        scanf("%f",&withdrawal);
        break;
    }
    if (withdrawal>balance)
    {
        printf("invalled funds!\n you can withdraw only till  %2f only jake kama be chutiye\n",balance);
        
    }
    else if (balance=withdrawal)
    {
    printf("you withdraw amount successfully\n now ablable balance is %2f\n ", balance,withdrawal);

        printf("THANK YOU!!\n VISIT AGAIN");
    }
    
    
    
    
    return 0;
}