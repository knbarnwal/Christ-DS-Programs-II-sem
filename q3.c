	/******************************************************************************* 
	 *                                                                             *                       
	 *                                                                             *
	 *      Implementation of various Control structures in C                      *
	 *      C program to take input of the list of customers and display it.       *
	 *     																		   *
	 * 																			   *
	 *******************************************************************************/









	/******************************************************************************* 
	 *                                                                             *
	 *                      C Library Files                                        *
	 *                                                                             *
	 *******************************************************************************/
	 
	 
	 
#include <string.h> 
#include <stdio.h> 





	/******************************************************************************* 
	 *                                                                             *
	 *                                                                             *
	 *            Here we defined the macros name Num with a value 10              *
	 *            NO_CHAR with value of 30 for the number of characters            *
	 *            input and ZERO for the integer value 0                           *
	 * 																			   *
	 * 																			   *
	 *******************************************************************************/
	 
#define NUM 6
#define NO_CHAR 30
#define ZERO 0


void star_line(){
	int loop;
	printf("\n\t");
	loop=0;
	while(loop<=60){
		printf("*");loop++;
	}
	printf("\n");
}

int main() {

	  int loop = 0;

	  star_line();
	  printf("\n\t\tImplementation of various Control structures in\n\n");
	  printf("\t\t\t\t----C----\n\b\b");
	  star_line();
	  
	  char input[3];
	  const char names[NUM][NO_CHAR]={"Mincy", "Navin Barnwal", "Ramesh Sharma", "Maryam sabi", "Khusboo Kumari", "John joshep"};
	  
	  printf("\n\nThis program displays the list of customers you have !!\n\n\t\tWould you like to continue(yes/no):- ");
	  scanf(" %s", input);
	  star_line();
	  printf("\n\n");
	  if ((strcmp(input, "yes") == ZERO)) {
		  
			for (loop = 0; loop < NUM; loop++) {
				
			  printf("\t\tYour Customer %d name is:- %s\n", loop + 1, names[loop]);
			  
			}
			
	  } 
	  
	  else {
		  
			do {
				
			  printf("\n\nYou will have to enter 'yes', else program will not work.\n\n");
			  
			  return main();
			  
			}
			
			while (strcmp(input, "yes") == ZERO);
	  }
	  star_line();
	  return 0;
}
