/*-----------------------------------------------------------------------------
-					          SE 185 Lab 02
-             Developed for 185-Rursch by T.Tran and K.Wang
-	Name: Akash Patel	
- 	Section: SE 185 C
-	NetID:145968622
-	Date: 02/07/2019
-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
-	                            Includes
-----------------------------------------------------------------------------*/
#include <stdio.h>


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
    int integerResult;
    double decimalResult;

    integerResult = 77 / 5;
    printf("The value of 77/5 is %d, using integer math\n", integerResult);
	// I changed %lf to %d to make sure an integer value comes out instead of decimal.
    integerResult = 2 + 3;
    printf("The value of 2+3 is %d\n", integerResult);
	// I inserted integerResult after the printed statement to make sure i get an integer result.
	

    decimalResult = 1.0 / 22.0;
    printf("The value 1.0/22.0 is %lf\n", decimalResult);
	// i chnaged the %d to %lf to get a decimal answer.

    return 0;
}

