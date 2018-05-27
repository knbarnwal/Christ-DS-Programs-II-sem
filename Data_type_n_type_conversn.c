

/*******************************************************************************
 *  C program to calculate the rate of the metal while                         *
 * the weight and price is mentioned by the end                                *
 * user.                                                                       *
 *                                                                             *
 * Hence using rate = (number of grams of metal) * (price of that metal).      *
 *******************************************************************************/

/**************************************************************************
 *                                                                        *
 * 		               Header Files Used                                  *
 *                                                                        *
 **************************************************************************/

#include <stdio.h>
#include <stdlib.h>

  /**************************************************************************
   *                                                                        *
   * 			Used Macros as NUM and ONE to store Value of 6 and 1        *
   *                                                                        *
   **************************************************************************/

  #define NUM 6
  #define ONE 1


  /**************************************************************************
   *                                                                        *
   * 	Gotoxy() is used to set the curser on the manual location           *
   *                                                                        *
   **************************************************************************/



void gotoxy(int x,int y){
	
	printf("%c[%d;%df",0x1B,y,x);
	
}

  /**************************************************************************
   *                                                                        *
   * 			Box Function to make (**) border box in the program         *
   *                                                                        *
   **************************************************************************/

void box(){
	
	int hor_row, ver_col;
	
	for(hor_row=10; hor_row<70; hor_row++){
		gotoxy(hor_row, 3);
			printf("/");
		gotoxy(hor_row, 4);
			printf("/");
		
		
	}
	
	for(hor_row=13; hor_row<70; hor_row++){
		gotoxy(hor_row, 22);
			printf("/");
		gotoxy(hor_row, 21);
			printf("/");
		
	}
	
	for(ver_col=4; ver_col<23; ver_col++){
		gotoxy(10, ver_col);
			printf("/");
		gotoxy(11, ver_col);
			printf("/");
		gotoxy(12, ver_col);
			printf("/");
		
		
	}
	
		
	for(ver_col=3; ver_col<23; ver_col++){
		gotoxy(70, ver_col);
			printf("/");
		gotoxy(69, ver_col);
			printf("/");
		gotoxy(68, ver_col);
			printf("/");
		
	}
	
}


int main() {
		
	   
	   
	  /*to store the name of metal we will work on */
	  char metal[NUM];

	  /* grams store the value of grams */
	  float grams;

	  /* we take rate of metals as an input*/
	  signed int rate;

	  /* in case rate of metal is in millions */
	  unsigned int rate_2;
	  int cost = ONE;

	  /* in case rate of metals is in millions. */
	  double cost_2 = ONE;
	  
	  box();

	  /************************************************************************
	   *                                                                      *
	   *                        Topic Of the Program                          *
	   *                                                                      *
	   ************************************************************************/
	   gotoxy(16,10);
	  printf("| Implementation of the various Data Types |");
	  gotoxy(16,11);
	  printf("| with modifiers and type conversion in C  |");
	  gotoxy(18,15);
	  /* asking user what metal do he wanna work with  */
	  printf("What metal do you wanna work with (Gold/Silver) ");
	  
	  gotoxy(33,16);
	  /* Get user to input the name of metal */
	  printf(":-");
	  scanf("%s", metal);
	  system("clear");
	  box();
	  
	  gotoxy(20,10);
	  printf("How many grams of %s do u want :-", metal);
      gotoxy(25,16);
	  /* asking user about the number of grams of metal */
	  printf("I want ");
	  gotoxy(40,16);
	  printf("grams of %s", metal);
	  gotoxy(33,16);
	  scanf("%f", &grams);
	  
	  system("clear");
	  box();
	  
	  
	  /************************************************************************
	   *                                                                      *
	   *    In case metal weights less than 10 gm, program will use float     *
	   *    and signed data types, and will output the calculate value.       *
	   *                                                                      *
	   ************************************************************************/

	  if (grams <= 10) {
		  gotoxy(20,10);
		printf("What is the price of %s/ gram ", metal);
		gotoxy(30,16);
		printf(":-");
		scanf("%d", & rate);
		cost = rate * grams;

		/* Used cost as type conversion to store float value of grams */
		system("clear");
		box();
		gotoxy(20,10);
		printf("%0.2f Grams of %s will cost you:- ",grams, metal);
		gotoxy(30,16);
		
		printf("Rs. %d", cost);
	  }

	  /************************************************************************
	   *                                                                      *
	   *   In case metal weights greater than 10 gm, program will use         *
	   *   float and signed data types, and will output the calculate value.  *
	   *                                                                      *
	   ************************************************************************/
	  else {
		  gotoxy(20,10);
		printf("What is the price of %s/ gram:- ", metal);
		gotoxy(30,16);
		printf(":- ");
		scanf("%d", & rate_2);
		cost_2 = rate_2 * grams;
		system("clear");
		box();
		gotoxy(20,10);
		printf("%0.2f Grams of %s will cost you:- ",grams, metal);
		gotoxy(30,16);
		
		printf("Rs. %.2f", cost_2);
	  }
	  gotoxy(70,21);
	  /************************************************************************
	   *                                                                      *
	   *    The moment program work is done it will return a zero value       *
	   *    to the main function to show that the program terminated          *
	   *    successfully.                                                     *
	   *                                                                      *
	   ************************************************************************/

	  return 0;
}
