	/*******************************************************************************
	 *                                                                             *
	 *                                                                             *
	 *     C program to calculate the base metals price using switch,              *
	 *     if and else statements.                                                 *
	 *                                                                             *
	 *                                                                             *
	 ******************************************************************************* 
	 ******************************************************************************* 
	 *                                                                             *
	 *                                                                             *
	 *      In this program user will be asked to enter the name of metal whose    *
	 *      rate they want to calculate on mentioning the price of metals and      *
	 *      the amount of grams they wanna have.                                   *
	 *                                                                             *
	 *                                                                             *
	 *******************************************************************************/

	/******************************************************************************* 
	 *                                                                             *
	 *      To work with functions like printf and scanf the library we need       *
	 *      is stdio.                                                              *
	 *                                                                             *
	 *******************************************************************************/
	 
 
#include <stdio.h>

 


	/******************************************************************************* 
	 *                                                                             *
	 *                                                                             *
	 *            Here we defined a macro name Num with a value 10                 *
	 *                                                                             *
	 *                                                                             *
	 *******************************************************************************/
	 
 
#define NUM 10



	/******************************************************************************* 
	 *                                                                             *
	 *                                                                             *
	 *            Functions Used throughout the program                            *
	 *                                                                             *
	 *                                                                             *
	 *******************************************************************************/
	 
 
void metal(char metal[]);
void display_menu();
void choice();

void metal(char metal[NUM]) {

	  /*****************************************************************************
	   *                To store the name of metal we will work on                 *
	   *****************************************************************************/
	  float grams;

	  /*****************************************************************************
	   *                 We take rate of metals as an input                        *
	   *****************************************************************************/
	 
	  signed int rate;

	  /* in case rate of metal is in millions */
	  unsigned int rate_2;
	  int cost = 1;

	  /* in case rate of metals is in millions. */
	  double cost_2 = 1;

	  /* this printf statement asks the user to enter the name of metal 
	   * they wanna work with throughout the given options.
	   * The input value will be handled by the scanf function 
	   * which was initialised just after the printf statement.
	   * */
	  printf("\n\nHow many grams of %s do u want:- ", metal);
	  scanf("%f", & grams);

	  /* in case metal weights less than 10 gm,
	   * program will use float and signed data types.
	   * and will output the calculate value.
	   * 
	   * It will work like the user will enter the price of metal 
	   * and the progarm will calculate the rate of that amount of metal 
	   * given that there number of grams is given already.
	   * */

	  if (grams <= 10) {

		printf("\n\nWhat is the price of %s/ gram:- ", metal);
		scanf("%d", & rate);
		cost = rate * grams;
		printf("\n\n\t\t***%f grams of %s will cost you Rs. %d***", grams, metal, cost);
	  }

	  /* in case metal weights greater than 10 gm,
	   * program will use float and signed data types.
	   * and will output the calculate value.
	   * */
	  else {

		printf("What is the price of %s/ gram:- ", metal);
		scanf("%d", & rate_2);
		cost_2 = rate_2 * grams;
		printf("\n\n\t*** %f grams of %s will cost you Rs. %0.2f ***", grams, metal, cost_2);

	  }

}

void display_menu(void) {

	  printf("What metal you want to work with ?\n\n");
	  printf("\t\t\t 1. Gold\n");
	  printf("\t\t\t 2. Silver\n");
	  printf("\t\t\t 3. Platinum\n");
	  printf("\t\t\t 4. Bronze\n");
	  printf("\t\t\t 5. Brass\n");
	  printf("Select from (1-5):- ");
	  choice();
}

void choice(void) {
	  int choice;
	  scanf("%d", & choice);

	  switch (choice) {

	  case 1:
		metal("Gold");
		break;
	  case 2:
		metal("Silver");
		break;
	  case 3:
		metal("Platinum");
		break;
	  case 4:
		metal("Bronze");
		break;
	  case 5:
		metal("Brass");
		break;
	  default:
		printf("Invalid input, Please Select again !!\n\n");
		display_menu();
		break;
	  }
}

/* this is the main function from where the program will be initialized */
int main() {

	  /* Question we got to solve through this program */
	  printf("\n\n\t\tDemonstration of nested if and switch... case structure\n\n");

	  /* the moment the program is run it will call the display menu 
	   * function which is a complete output function to do the 
	   * visual effect of the switch case 
	   * asking user what metal do they wanna work with*/

	  display_menu();
	  /* the moment program work is done it will return a zero value
	   * to the main function to show that the program 
	   * terminated successfully*/

	  return 0;
}
