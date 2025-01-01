// #include <stdio.h>
// #include <math.h>

// int main(){
//     float a, b ,c ;
//     printf("enter value of a\n");
//     scanf("%d",&a);
//     printf("enter value of b\n");
//     scanf("%d",&b);
//     c=fmod(a,b);

// printf("value is %.2f, %.2f,%.2f,%.2f,%.2f\n",(a+b),(a-b),(a*b),(a/b),(c));

    

//     return 0;
// }




#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    while (1)
    {
    
    
    printf("Enter value of a: ");
    scanf("%f", &a);
    printf("Enter value of b: ");
    scanf("%f", &b);
  

    if (b != 0) {
        c = fmod(a, b);
        printf("Values are: %.2f, %.2f, %.2f, %.2f, %.2f\n", (a + b), (a - b), (a * b), (a / b), c);
    } else {
        printf("Division by zero is not allowed.\n");
    }
    }
    return 0;
}
