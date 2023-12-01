/*-----------------------------------------------------------------------------
-					          SE 185 Lab 04
-             Developed for 185-Rursch by T.Tran and K.Wang
-	Name:
- 	Section:
-	NetID:
-	Date:
-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
-	                            Includes
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>


/*-----------------------------------------------------------------------------
-	                            Defines
-----------------------------------------------------------------------------*/
#define TRUE 1
#define FALSE 0


/*-----------------------------------------------------------------------------
-	                            Prototypes
-----------------------------------------------------------------------------*/
double mag(double x, double y, double z);
int close_to(double tolerance, double point, double value);
const double GYRO_TOLERANCE = .3;
const double ACCE_TOLERANCE = .02;
void display_Orientation (char c);

/*-----------------------------------------------------------------------------
-							  Implementation
-----------------------------------------------------------------------------*/
int main(void) {
    int t, b1, b2, b3, b4;
    double ax, ay, az, gx, gy, gz;
	char orientation;
	char prev;


    while (TRUE) {
        scanf("%d, %lf, %lf, %lf, %lf, %lf, %lf, %d, %d, %d, %d", &t, &ax, &ay, &az, &gx, &gy, &gz, &b1, &b2, &b3, &b4 );

        /* printf for observing values scanned in from ds4rd.exe, be sure to comment or remove in final program */
        //printf("Echoing output: %d, %lf, %lf, %lf, %lf, %lf, %lf, %d, %d, %d, %d \n", t, ax, ay, az, gx, gy, gz, b1, b2, b3, b4);

        /* It would be wise (mainly save time) if you copy your code to calculate the magnitude from last week
         (lab 3).  You will also need to copy your prototypes and functions to the appropriate sections
         in this program. */
		 if( close_to(ACCE_TOLERANCE, 0 , mag(ax, ay, az))){
			 if (close_to (GYRO_TOLERANCE, 1, gy)){
				orientation = 't'; //top
				}
		
			else if (close_to(GYRO_TOLERANCE, -1, gy)){
				orientation = 'b'; //bottom
				}
		
			else if (close_to(GYRO_TOLERANCE, -1, gx)){
				orientation = 'l'; //left
				}
		
			else if (close_to(GYRO_TOLERANCE, 1, gx)){
				orientation = 'r'; //right
				}
			else if (close_to(GYRO_TOLERANCE, -1, gz)){
				orientation = 'f'; //front
				}
		
			else if (close_to( GYRO_TOLERANCE, 1, gz)){
				orientation = 'd'; //back
				}
			 

		}
        //printf("At %d ms, the acceleration's magnitude was: %f\n", t, mag(ax, ay, az));
		
		
		
		
	if (b1 == 1){
		break;
	}
		
	if (prev != orientation){
		prev = orientation;
		display_Orientation(orientation);
	}
		
		
			
		
			
			

    }

    return 0;
}

/* Put your functions here */
double mag(double x, double y, double z){
	return sqrt((pow(x,2) + pow(y,2) + pow(z,2)));
}

int close_to(double tolerance, double point, double value){
	return(point + fabs(tolerance) >= value && point - fabs(tolerance) <= value)?TRUE: FALSE;
}

void display_Orientation (char c){
	switch(c){
		case ('t'): printf("Top\n");
		break;
		
		case ('b'): printf("Bottom\n");
		break;
		
		case ('l'): printf("Left\n");
		break;
		
		case ('r'): printf("Right\n");
		break;
		
		case ('f'): printf("Front\n");
		break;
		
		case ('d'): printf("Back\n");
		break;
	}
}
		

