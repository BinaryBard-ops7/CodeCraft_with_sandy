#include <stdio.h>
#include <string.h>

int main()
{
    char color[10];
    while (1)
    {
        printf("Enter the traffic light color (red, yellow, green):\n ");
        scanf("%s", color);

        if (strcmp(color, "red") == 0)
        {
            printf("stop! right now\n");
        }
        else if (strcmp(color, "yellow") == 0)
        {
            printf("wait! right now\n");
        }
        else if (strcmp(color, "green") == 0)
        {
            printf("go! right now\n");
        }
        else
        {
            printf("wrong input\n");
        }
    }
    return 0;
}