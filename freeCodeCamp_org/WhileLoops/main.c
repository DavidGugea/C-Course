#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    while(index <= 5){
        printf("%d\n", index);
        // index = index + 1; -- > index++
        index++;
    }
    */
    int index = 6;

    do{
        printf("%d\n", index);
        index++;
    }while(index <= 5);

    return 0;
}
