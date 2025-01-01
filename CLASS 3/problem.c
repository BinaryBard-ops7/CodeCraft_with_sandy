#include <stdio.h>

int main(){
    int x;
    printf("Enter any number \n");
    scanf("%d",&x);
    if (x>0)
    {
        printf("number be positive\n");
        
    }
    else if (x==0)
    {
        printf("number be zero\n");
        
    }
    else{
        printf("number be negative\n");
        
    }
    
    return 0;
}