#include <stdio.h>

int main(){
    char day[10];
     printf("enter name of days\n");
     scanf("%s",day);
     if (strcmp(day,"monday")==0)
     {
         printf("1st day of week\n");
     }
     else if (strcmp(day,"tuesday")==0)
     {
         printf("2nd day of week\n");
     }
     else if (strcmp(day,"wednesday")==0)
     {
         printf("3rd day of week\n");
     }
     else if (strcmp(day,"thursday")==0)
     {
         printf("4th day of week\n");
     }
     else if (strcmp(day,"friday")==0)
     {
         printf("5th day of week\n");
     }
     else if (strcmp(day,"saturday")==0)
     {
         printf("6th day of week\n");
     }
     else if (strcmp(day,"sunday")==0)
     {
         printf("7th day of week\n");
     }
     else
     {
         printf("wrong input\n");
     }
    return 0;
}