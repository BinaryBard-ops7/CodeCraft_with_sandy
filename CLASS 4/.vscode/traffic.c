#include <stdio.h>

int main(){
    int x;
    int red=1;
    int yellow=2;
    int green=3;
    while (1)
    {
    printf("enter colour of light who you are looking\n");
    scanf("%d",&x);
    if (x==1)
    {
        printf("stop! right now\n");
    }
    else if (x==2)
    {
        printf("wait! right now\n");
    }
    else if (x==3)
    {
        printf("go! right gyus now\n");
    }
    else
    {
        printf("wrong input\n");
    }

    }
    return 0;
}