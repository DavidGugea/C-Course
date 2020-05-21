#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int i = 1;
    while(i <= 5){
        printf("%d\n", i);
        i++;
    }

    space();
    */

    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};

    /*
    int i;
    for(i = 1; i <= 5; i++){
        printf("%d\n", i);
    }
    */

    for(int i = 0; i < 6; i++){
        printf("%d\n", luckyNumbers[i]);
    }

    return 0;
}
