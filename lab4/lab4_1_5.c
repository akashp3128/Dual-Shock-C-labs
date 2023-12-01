/*-----------------------------------------------------------------------------
-                             SE 185 Lab 05
-             Developed for 185-Rursch by T.Tran and K.Wang
-----------------------------------------------------------------------------*/
#include <stdio.h>

/* This program calculates the sum of 1 to x, where x is a user input */

int sum_funct(int n);

//remove int main function

int main()
{
    int input;

    printf("Please input a number from to sum up to: ");

    scanf("%d", &input);

    printf("The sum of 1 to %d is %d\n", input, sum_funct(input));
	

}

//remove function and print statement
	
	

int sum_funct(int n)
{
    return (n*(n+1))/2;
}
