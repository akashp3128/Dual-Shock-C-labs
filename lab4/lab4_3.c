/*-----------------------------------------------------------------------------
-                             SE 185 Lab 05
-             Developed for 185-Rursch by T.Tran and K.Wang
-----------------------------------------------------------------------------*/
#include<stdio.h>

#include<time.h>
#include<stdlib.h> // add library

/* Prototypes */ //include asterisk
char AskToPlay(int playedBefore); //change to played before

void RunGame (int computerNum);
int SelectRandNum(); //define selectrandnum

int main()
{
    char prompt = '-';
    int played = 0, computerGuess = 0; 

    prompt = AskToPlay(played); 
    played = 1;

    while(prompt == 'y')     /* This line does not contain an error */
    {
        computerGuess = SelectRandNum();
        RunGame(computerGuess);
        prompt = AskToPlay(played);
    }
    printf("\n\nThank you for playing.\n"); //missing semicolon
    return 0;
}


char AskToPlay(int playedBefore)
{
    char yesNo;
    if (playedBefore == 0)
    {
        printf("Do you want to play a game?\n  ->");
        scanf(" %c", &yesNo); //include &
    }
    else
    {
        printf("Do you want to play again?\n  ->");
        scanf(" %c", &yesNo);
    }
    return yesNo;
}

int SelectRandNum()
{
    int compGuess = 0; //change to compGuess
    srand((int)time(0));
    compGuess = ((rand() % 100) + 1);
    return compGuess;
}


void RunGame (int computerNum)
{
    int number = 0, correct = 0;


    printf("\nYou are guessing a number.  The options are 1 through 100.\n\n");
    printf("What is your guess on what number I will select?\n  ->");
    scanf("%d", &number);

    while ((number <1) || (number >100))    /* This line does not contain an error */
    {
        printf("\nYour number is not within the correct range of numbers.  Guess again\n  ->");
        scanf("%d", &number);
    }


    while (correct == 0)    /* This line does not contain an error */
    {

        if (number = computerNum)
        {
            printf("\nYou guessed the number correctly!\n");
            printf("The number was %c\n\n", computerNum);
            correct = 1;
        }
        else if (number < computerNum) //take out semi colon
        {
            printf("\nYou guessed too low.  Enter another guess.\n  ->");
            scanf("%d", &number);
        }
        else
        {
            printf("\nYou guessed too high.  Enter another guess.\n  ->");
            scanf("%d", &number);
        }
    }
}



