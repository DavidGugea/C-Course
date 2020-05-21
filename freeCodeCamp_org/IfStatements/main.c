#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3){
    // My Code ( for two numbers ) : return num1 > num2 ? num1 : num2;
    // Tutorial code :
    int result;
    /*
    Tutorial code for two numbers:

    if(num1 > num2){
        result = num1;
    }else{
        result = num2;
    }
    */

    /*
    My Code for three numbers:
    if(num1 >= num2 && num1 >= num3){
        result = num1;
    }else if(num2 >= num1 && num2 >= num3){
        result = num2;
    }else{
        result = num3;
    }
    */

    // Tutorial code for three numbers :
    if(num1 >= num2 && num1 >= num3){
        result = num1;
    }else if(num2 >= num1 && num2 >= num3){
        result = num2;
    }else{
        result = num3;
    }

    return result;
}

int main()
{
    // My Code ( for two numbers ) : printf("%d\n", max(15, 8));
    // My code printf("%d", max(4, 10, 6));
    // Tutorial : printf("%d", max(10, 2, 3));
    if(3 != 2){
        printf("True");
    }

    return 0;
}
