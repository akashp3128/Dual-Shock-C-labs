/*-----------------------------------------------------------------------------
-					          SE 185 Lab 02
-             Developed for 185-Rursch by T.Tran and K.Wang
-	Name: Akash Patel	
- 	Section: SE 185 C
-	NetID: apatel1@iastate.edu
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

    /* Put your code after this line */
	int A = 6427 + 1725;
	printf("6427 + 1725 = %d\n ", A);
	
	int B = (6971 * 3925) -95;
	printf("6971 * 3925 = %d\n", B);
	
	double C = 79 + (12 / 5);
	printf("79 + 12 / 5 = %.2lf\n", C);
	
	double D = (3640.0 / 107.9);
	printf("3640.0 / 107.9 = %.2lf\n", D);
	
	int E = (22 / 3) * 3;
	printf("22 / 3) * 3 = %d\n", E);
	
	int F = 22 / (3 * 3);
	printf("22 / (3 * 3) = %d\n", F);
	
	double G = 22 / (3 * 3);
	printf("22 / (3 * 3) = %.2lf\n", G);
	
	double H = (22 / 3) * 3;
	printf("(22 / 3) * 3 = %.2lf\n", H);
	
	double I = (22.0 / 3) * 3;
	printf("(22.0 / 3) * 3 = %.2lf\n", I);
	
	int J = 22.0 / (3 * 3.30);
	printf("22.0 / (3 * 3.30) = %d\n", J);
	
	double K = (22.0 / 3.0) * 3.0;
	printf("(22.0/3.0) * 3.0 = %.2lf\n", K);
	
	//Creating formulas
	
	double areaOfCircle= 3.14159 * pow(11.7835,2);
	printf("The area of the circle is %.2lf\n", areaOfCircle);
	//The area of a circle is pi * r^2, so i divided the circumference to get the radius and plugged it into the formula. 
	
	double feetToMeters= 14 * .3048;
	printf("14 feet converted to meters is %.2f\n", feetToMeters);
	// There are 3.28 feet in a meter so I multiplied 14 feet by .3048 meters
	
	double fToC = (76-32)/1.8;
	printf("76 degrees Fahrenheit to centrigrade is %.2lf\n", fToC);
	// the equation was given so i plugged in 76 for Tf
	
	
	
	
	

	
	




    return 0;

}

