/* roll.c
A dice rolling program
by SMH
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char* argv[]){ // Setup main to accept arguments.

/*
	Input argument order,
		argument 1 = Number of Dice. ex. "1".
		argument 2 = d. As is in die.
		argument 3 = Numbmer of Sides. ex. "20".
		argument 4 = Modifier. ex "+2".
		Example syntax = roll 1 d 20 +5. Meaning, roll 1 D20 die and add a modifier of 5
	to the sum of the roll.
*/

	int arg1 = 0; // Dice.
	int arg3 = 0; // Sides.
	int arg4 = 0; // Modifier.

	int num_dice = 0;
	int sides = 0;
	int roller;
	int n = 0;
	char answer;
	int arraysum = 0;
	int natural = 0;
	int run = 1;
	int rolls = 0;
	int modifier = 0;
	int modified = 0;

	srand(time(0)); // Initialize the random number generator and use time as a seed.

	if (argc == 1){
		printf("\nEnter the number of dice:\t");
		scanf("%d", &num_dice);
		printf("Enter the number of sides:\t");
		scanf("%d", &sides);
		printf("Enter +/- modifier:\t\t");
		scanf("%d", &modifier);
	} else {
		// Converting string type to integer type using function "atoi( argument)"
   		arg1 = atoi(argv[1]);
   		arg3 = atoi(argv[3]);
  	    arg4 = atoi(argv[4]);
		num_dice = arg1;
		sides = arg3;
		modifier = arg4;
	}

	for(roller = 0; roller < num_dice; roller++) {
		n = rand() % sides + 1;
		rolls = rolls + 1;
		printf("\nD%d roll (%d):\t%d\n",sides, rolls, n);
		printf("---------------------------------\n");
		arraysum = arraysum + n;
		natural = arraysum;
		modified = arraysum + modifier;
		}

	printf("\nNatural Sum:     \t%d\n", natural);
	printf("\nModified Sum:    \t%d\n", modified);
	printf("---------------------------------\n");

	// Clean up to prepare for subsequent rolls.
		arraysum = 0;
		natural = 0;
		modifier = 0;
		modified = 0;
		num_dice = 0;
		sides = 0;
		rolls = 0;

	return 0;
}
