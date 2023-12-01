/*-----------------------------------------------------------------------------
-					          SE 185 Lab 06
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
#include <time.h>
#include <stdlib.h>


/*-----------------------------------------------------------------------------
-	                             Defines
-----------------------------------------------------------------------------*/
#define TRUE 1
#define FALSE 0


/*-----------------------------------------------------------------------------
-	                            Prototypes
-----------------------------------------------------------------------------*/

void buttonPressed(int b1);
int randomNum();
int roundTime = 2500; 
/*-----------------------------------------------------------------------------
-							  Implementation
-----------------------------------------------------------------------------*/
int main()
{
 int b1, b2, b3, b4, t, user;
 
 int count = 0;
 int bopIt = 0;
 int start;
 srand(time(NULL));
 
	printf("Bop-It game!\n");
	printf("Press circle to start the game\n");
	
		while(TRUE){
			//scan circle button and only run game if circle button is pressed
			scanf("%d, %d, %d, %d, %d", &t, &b1, &b2, &b3, &b4);
			if (b2 == 1){
				bopIt = 1;
			}
			else if (bopIt == 1 && b2 == 0 && b1 == 0 && b3 == 0 && b4 == 0){
				break;
			}
		}
		while(bopIt == 1){ //scans and checks to see if correct buttons are being pressed within the timeframe in this while loop
			scanf("%d, %d, %d, %d, %d", &t, &b1, &b2, &b3, &b4);
			if(b2 == 0 && b1 == 0 && b3 == 0 && b4 == 0){
				int button = randomNum();
				start = t;
				if (button == 1) {
					while(1){
						scanf("%d, %d, %d, %d, %d", &t, &b1, &b2, &b3, &b4);
						if(b1 == 1){
							count++;
							break;
						}
						else if (b2 == 1 || b3 == 1 || b4 == 1){
							printf("Wrong Answer\n");
							bopIt = 0;
							break;
						}
						else if (t - start > roundTime){
							printf("Out of time, restart to try again!");
							bopIt = 0;
							break;
						}
						else {
							if(roundTime == 0){
							printf("Out of time, restart to try again!");
							bopIt = 0;
							break;
					}
					}
				}
				}
				else if (button == 2) {
					while(1){
						scanf("%d, %d, %d, %d, %d", &t, &b1, &b2, &b3, &b4);
						if(b2 == 1){
							count++;
							break;
						}
						else if (b1 == 1 || b3 == 1 || b4 == 1){
							printf("Wrong Answer\n");
							bopIt = 0;
							break;
						}
						else if (t - start > roundTime){
							printf("Out of time, restart to try again!");
							bopIt = 0;
							break;
						}
						else {
							if(roundTime == 0){
							printf("Out of time, restart to try again!");
							bopIt = 0;
							break;
					}
					}
				}
				}
				else if (button == 3){
					while(1){
						scanf("%d, %d, %d, %d, %d", &t, &b1, &b2, &b3, &b4);
						if(b3 == 1){
							count++;
							break;
						}
						else if (b2 == 1 || b1 == 1 || b4 == 1){
							printf("Wrong Answer\n");
							bopIt = 0;
							break;
						}
						else if (t - start > roundTime){
							printf("Out of time, restart to try again!");
							bopIt = 0;
							break;
						}
						else {
							if(roundTime == 0){
							printf("Out of time, restart to try again!");
							bopIt = 0;
							break;
					}
					}
				}
				}
				else if(button == 4){
					while(1){
						scanf("%d, %d, %d, %d, %d", &t, &b1, &b2, &b3, &b4);
						if(b4 == 1){
							count++;
							break;
						}
						else if (b2 == 1 || b3 == 1 || b1 == 1){
							printf("Wrong Answer\n");
							bopIt = 0;
							break;
						}
						else if (t - start > roundTime){
							printf("Out of time, restart to try again!");
							bopIt = 0;
							break;
						}
						else {
							if(roundTime == 0){
							printf("Out of time, restart to try again!");
							bopIt = 0;
							break;
					}
					}
				}
				}
				else {
						if(roundTime == 0){
						printf("Out of time, restart to try again!");
						bopIt = 0;
						break;
					}
			}	
		}
		}
				
		printf("Thanks for playing!\n");
		printf("You made it through %d rounds", count);
		
	return 0;
}

void buttonPressed(int b2){ //starts the game
	if(b2 == 1){
		exit(1);
	}
}

int randomNum(){
	switch (rand() % 4 + 1){ //assigns random number 1-4 to buttons and every round the time decreases
		case 1:
		roundTime -= 100;
		printf("Press the TRIANGLE button!\n");
		printf("You have %d roundTime to respond!\n", roundTime);
		return 1;
		break;
		case 2:
		roundTime -= 100;
		printf("Press the CIRCLE button!\n");
		printf("You have %d roundTime to respond\n", roundTime);
		return 2;
		break;
		case 3:
		roundTime -= 100;
		printf("Press the CROSS button!\n");
		printf("You have %d roundTime to respond\n", roundTime);
		return 3;
		break;
		case 4:
		roundTime -= 100;
		printf("Press the SQUARE button!\n");
		printf("You have %d roundTime to respond\n", roundTime);
		return 4;
		break;
	}
}
