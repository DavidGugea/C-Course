#include <stdio.h>
#include <stdlib.h>

int calculator_myCode(){
    // My Code:
    int firstNumber;
    int secondNumber;

    printf("Print here your first number: ");
    scanf("%d", &firstNumber);
    printf("Print here your second number: ");
    scanf("%d", &secondNumber);

    int choice;
    printf("Choose one of the 5 operations :\n");
    printf("1. Add ( + )\n");
    printf("2. Difference ( - )\n");
    printf("3. Multiply ( * )\n");
    printf("4. Division ( / )\n");
    printf("5. Pow ( ^ )\n");
    scanf("%d", &choice);

    if(choice == 1){
        return firstNumber + secondNumber;
    }else if(choice == 2){
        return firstNumber - secondNumber;
    }else if(choice == 3){
        return firstNumber * secondNumber;
    }else if(choice == 4){
        return firstNumber / secondNumber;
    }else if(choice == 5){
        int result = firstNumber;

        // I will use a for loop even if we didn't do it in the courses yet.
        for(int i = 0; i < secondNumber; i++){
            result *= secondNumber;
        }

        return result;
    }else{
        printf("You had to chose something between 1/2/3/4/5, not %d\n", choice);
        return 0;
    }
}

int main()
{
    /*
    MY CODE :
    int result = calculator_myCode();
    if(result != 0){
        printf("The result that came out of the calculator was : %d", result);
    }else{
        printf("Try again.");
    }
    */

    // Tutorial code :
    double num1;
    double num2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter a number: ");
    scanf("%lf", &num2);

    if(op == '+'){
        printf("%f", num1 + num2);
    }else if(op == '-'){
        printf("%f", num1 - num2);
    }else if(op == '/'){
        printf("%f", num1 / num2);
    }else if(op == '*'){
        printf("%f", num1 * num2);
    }else{
        printf("Invalid Operator");
    }

    return 0;
}
