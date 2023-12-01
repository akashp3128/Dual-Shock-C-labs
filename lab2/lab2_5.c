/*-----------------------------------------------------------------------------
-					          SE 185 Lab 02
-             Developed for 185-Rursch by T.Tran and K.Wang
-	Name: Akash Patel	
- 	Section: SE 185 C
-	NetID: aptel1@iastate.edu
-	Date: 02/07/2019
-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
-	                            Includes
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>


/*-----------------------------------------------------------------------------
-	                            Defines
-----------------------------------------------------------------------------*/


/*-----------------------------------------------------------------------------
-	                            Prototypes
-----------------------------------------------------------------------------*/


/*-----------------------------------------------------------------------------
-							 Implementation
-----------------------------------------------------------------------------*/
int main()
{
    double a, b, c;
    double filler;
    /* Put your code after this line */
	printf("Enter a value for A:");
	scanf("%lf", &a);
	printf("Enter a value for B: ");
	scanf("%lf", &b);



    /*  This next line will calculate the square root of whatever value is
        inside the parenthesis and assigns it to the variable filler. */
    filler = sqrt((pow(a,2) + pow(b,2)));
	printf("value of c is: %lf",filler);



    return 0;


}

