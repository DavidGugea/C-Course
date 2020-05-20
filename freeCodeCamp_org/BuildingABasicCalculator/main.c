#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Answer : %f", num1+num2);


    /*
    MY CODE :

    int num1;
    int num2;

    printf("Print here your first number : \n");
    scanf("%d", &num1);
    printf("Print here your second number : \n");
    scanf("%d", &num2);
    printf("The sum of your numbers is %d", num1+num2);
    */

    return 0;
}
