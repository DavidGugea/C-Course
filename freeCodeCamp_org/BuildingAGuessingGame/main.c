#include <stdio.h>
#include <stdlib.h>

// MY CODE
struct User{
    char username[50];
    int tries;
};

void GuessingGame_MyCode(){
    int guessNumber = 25;

    // Get the user name
    char userName[50];
    printf("Print here your given name -- > ");
    fgets(userName, 50, stdin);

    // Create the user and give him the given name
    struct User user;
    user.tries=0;
    strcpy(user.username, userName);

    while(free){
        int userGuessNumber;
        printf("Print here the number -- > ");
        scanf("%d", &userGuessNumber);

        if(userGuessNumber > guessNumber){
            printf("The given guess number is bigger than the guess number. Try again !\n");
            user.tries++;
        }else if(userGuessNumber < guessNumber){
            printf("The given guess number is smaller than the guess number. Try again !\n");
            user.tries++;
        }else{
            printf("Congratulations %s, you found the number. Number of tries : %d\n", user.username, user.tries);
            break;
        }
    }
}
// MY CODE

int main()
{
    // GuessingGame_MyCode();
    // Tutorial code :
    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;


    while(guess != secretNumber && outOfGuesses == 0){
        if(guessCount < guessLimit){
            printf("Enter a number: ");
            scanf("%d", &guess);
            guessCount++;
        }else{
            outOfGuesses = 1;
        }
    }

    if(outOfGuesses == 1){
        printf("Out of guesses.");
    }else{
        printf("You Win!");
    }

    return 0;
}
