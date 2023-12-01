/*-----------------------------------------------------------------------------
-                             SE 185 Lab 05
-             Developed for 185-Rursch by T.Tran and K.Wang
-----------------------------------------------------------------------------*/
#include <stdio.h>


/* This program outputs if a integer will divide into another integer with no remainder*/

int main() {
    int i, j;

    printf("Enter an integer: "); //insert ;
    scanf("%d", &i);

    printf("Enter another integer:" ); //insert "
    scanf("%d", &j); //insert ;

    if (j % i == 0) {
        printf("%d divides %d\n", i, j);
	} //close bracket

    else{ //open bracket
        printf("%d does not divide %d\n", i, j); //correct "print"
        printf("%d %% %d is %d\n", j, i, (j % i) );
    }

    return 0;
}