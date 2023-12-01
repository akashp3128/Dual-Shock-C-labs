/*-----------------------------------------------------------------------------
-					  		SE 185 Lab 09
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
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <ncurses/ncurses.h>


/*-----------------------------------------------------------------------------
-	                             Defines
-----------------------------------------------------------------------------*/
#define MAXWORDS 100
#define WORDLENGTH 30


/*-----------------------------------------------------------------------------
-								Static Data
-----------------------------------------------------------------------------*/
char answer[WORDLENGTH];
char display[WORDLENGTH];
char remaining_letters[26];


/*-----------------------------------------------------------------------------
-	                            Prototypes
-----------------------------------------------------------------------------*/
//DO NOT MODIFY THIS FUNCTION
//removes white space from beginning and end of string
void trimws(char* str);

//DO NOT MODIFY THIS FUNCTION
//reads words from a file and places them in string array
int readFile(char* words[MAXWORDS], char* filename);

//add your function prototypes


//draw the hangman based on remaining guesses left
void draw_hangman(int guesses_left);

void confirm(int a, int z, char* hiddenWord);

void drawHangman();
/*-----------------------------------------------------------------------------
-							  Implementation
-----------------------------------------------------------------------------*/
int guessesLeft = 6;
int correct = 0;
int main(int argc, char* argv[])
{
	
    char* wordlist[MAXWORDS];
    int wordCount;
	int y;
	int t, b1, b2, b3, b4;
	int ljx, ljy, rjx, rjy;
	int x;
	int z;
	int a = -2;
	char* hiddenWord;
	char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
    if (argc > 1)
    {
		initscr();
		mvprintw(0, 0, "---WELCOME TO HANGMAN---");
		mvprintw(2, 0, "Use the the left joystick for movement; press 'X' for character selection");
		mvprintw(13, 0, "Word to Guess: ");
		mvprintw(12, 0, "Remaining wrong guess: %d " , guessesLeft);
		refresh();
		drawHangman();
		y = readFile(wordlist, argv[1]);
			for (int i = 0; i < 26; i++) {
				mvprintw(18, (i * 2), "%c", alphabet[i]);
				
			}
			refresh();
			srand(time(0));
			x = rand() % y;
			hiddenWord = wordlist[x];
			z = strlen(hiddenWord);
			for (int i = 0; i < z; i++) {
				mvprintw(14, (i), "*");
			
			}
			refresh();
			do {
				scanf("%d , %d , %d , %d , %d , %d , %d , %d , %d", &t, &b1, &b2, &b3, &b4, &ljx, &ljy, &rjx, &rjy);
				if (ljx > 100) {
					a+=2;
					mvprintw(19, a, "^");
					refresh();
					while (1) {
						scanf("%d , %d , %d , %d , %d , %d , %d , %d , %d", &t, &b1, &b2, &b3, &b4, &ljx, &ljy, &rjx, &rjy);
						if (ljx < 100 && ljx > -100)
							break;
					}
					mvprintw(19, a, " ");
				}
				if (ljx < -100) {
					a-=2;
					mvprintw(19, a, "^");
					refresh();
					while (1) {
						scanf("%d , %d , %d , %d , %d , %d , %d , %d , %d", &t, &b1, &b2, &b3, &b4, &ljx, &ljy, &rjx, &rjy);
						if (ljx < 100 && ljx > -100) 
							break;
					}
					mvprintw(19, a, " ");
				}
				
				if (b3 == 1) {
					while (1) {
						scanf("%d , %d , %d , %d , %d , %d , %d , %d , %d", &t, &b1, &b2, &b3, &b4, &ljx, &ljy, &rjx, &rjy);
						if (b3 == 0) {
							confirm(a, z, hiddenWord);
								break;
						}
					}
				}
			} while (b4 == 0);
        //This is the only part you need to modify for this beginning section
    }
    else
    {
        printf("Missing filename on command line");
        return 0;
    }

    //Put rest of code here
	endwin();
}

//implement your functions


//DO NOT MODIFY THIS FUNCTION
//removes white space from beginning and end of string
void trimws(char* str)
{
    int len = strlen(str);
    if (len == 0) return;

    int i = len - 1;
    while(isspace(str[i]) && i>=0) {
        str[i] = '\0';
        len--;
        i--;
    }
    i=0;
    while (isspace(str[i]) && i<len) {
        int j;
        for (j=0;j<len;j++) {
            str[j] = str[j+1];
        }
        len--;
    }
}

//DO NOT MODIFY THIS FUNCTION
//reads words from a file and places them in string array
int readFile(char* words[MAXWORDS], char* filename)
{
    int num_read = 0;
    char line[WORDLENGTH];
    char *p;
    FILE* fp = fopen(filename, "r");
    while(!feof(fp))
    {
        p = fgets(line, WORDLENGTH, fp);
        if (!feof(fp) && p != NULL) {
            trimws(line);
            words[num_read] = (char *) malloc(strlen(line) + 1);
            strcpy(words[num_read], line);
            num_read++;
        }
    }
    fclose(fp);
    return num_read;
}

int read_input(int* button_X, int* button_S, int* l_joy_x, int* l_joy_y, int* r_joy_x, int* r_joy_y)
{
	scanf("%d, %d, %d, %d, %d, %d", button_X, button_S, l_joy_x, l_joy_y, r_joy_x, r_joy_y);
	if (*button_S == 1) {
		return 1;
	}
	else {
		return 0;
	}

}

void confirm(int a, int z, char* hiddenWord) {
	int i;
	char j = mvinch(18, a);
	int correctTwo = 0;
	mvprintw(18, a, "_");
	mvprintw(12, 0, "Remaining wrong guess: %d", guessesLeft);
	refresh();
	for (i = 0; i <= z; i++) {
		if (hiddenWord[i] == j) {
			mvprintw(14, i, "%c", j);
			refresh();
			correctTwo += 1;
			correct += 1;
		}
	}
	
	if(correctTwo == 0) {
		guessesLeft--;
	}
	
	if (correct == z) {
		for (int i = 15; i < 25; i++) {
			for (int j = 0; j < 51; j++) {
				mvprintw(i, j, " ");
			}
		}
		mvprintw(16, 0, "You win, congrats!");
		mvprintw(17, 0, "The word was: %s ", hiddenWord);
		refresh();
	}

	if (guessesLeft == 5) {
		mvprintw(6, 8, "0");
	}

	if (guessesLeft == 4) {
		mvprintw(7, 8, "|");
	}

	if (guessesLeft == 3) {
		mvprintw(7, 7, "/");
	}

	if (guessesLeft == 2) {
		mvprintw(7, 9, "\\");
	}

	if (guessesLeft == 1) {
		mvprintw(8, 7, "/");
	}

	if (guessesLeft == 0) {
		mvprintw(8, 9, "\\");
	for (int i = 15; i < 25; i++) {
		for (int j = 0; j < 51; j++) {
			mvprintw(i, j, " ");
		}
	}
	mvprintw(16, 0, "GG You suck at this");
	mvprintw(17, 0, "The word was: %s ", hiddenWord);
	refresh();
	}
	mvprintw(12, 0, "Remaining wrong guess: %d", guessesLeft);
	refresh();
	
}

void drawHangman() {
	mvprintw(4, 3, "_______");
	for (int i = 0; i <= 5; i++) {
		mvprintw(5 + i, 3, "|");
	}
	mvprintw(5, 9, "|");
	mvprintw(10, 0, "____");
	mvprintw(10, 4, "____");
	refresh();
}