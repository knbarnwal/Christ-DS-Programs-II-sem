	/******************************************************************************* 
	 *                                                                             *                       
	 *                           												   *
	 * 				File Name :-  Control_structures.c							   *
	 * 																			   *
	 * 							Topic:-											   *
	 *                                                   						   *
	 *      Implementation of various Control structures in C     				   *
	 * 																			   *
	 * 																			   *
	 * 							Task:- 											   *
	 *                  														   *
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

#define NUM 30
#define NO_CHAR 30
#define ZERO 0


/************************************************************************
 * 																		*
 * 			This Function is used to draw stars(*) line in the program  *
 * 																		*
 ************************************************************************/
 
	void star_line() {
	  int loop;
	  printf("\n\t");
	  for (loop = 0; loop <= 60; loop++) {
	    printf("*");
	  }
	  printf("\n");
	}




int main() {

    int loop = 0, customers;
	char yes_no[3];
	  
	star_line();
	  
	printf("\n\t\tImplementation of various Control structures in\n\n");
	printf("\t\t\t\t----C----\n\b\b");
	  
	star_line();
	  

	char names[NUM][NO_CHAR];

	printf("\n\n\t\t\t***Welcome to GetMeJewel*** ");

	printf("\n\n\t\t This program helps you to take input of\n\t\t\t the list of customers and display it. ");

	printf("\n\n\tSir, Would You like to enter your Customer Name(yes/no):- ");
	  
	fgets(yes_no, 4, stdin);
	  
	if ((strcmp(yes_no, "yes") == ZERO)) {

	    printf("\n\nHow many customers Names would you like to enter:-");
	    scanf("%d", & customers);
	    
    } 
	  
	else {
		  
	   do{
		   printf("\n\n\n\n\t\t\tThankx for coming, Have a Great Day !!");
	   return 0;
   }
	   while(1);
	    
	}

	for (loop = 0; loop < customers; loop++) {
		  
	    printf("\n\t\tEnter the name of Customer %d:- ", loop + 1);
	    scanf(" %[^\n]s", names[loop]);
	    
	}

	printf("\nWould you like to display the list (yes/no):- ");
	scanf(" %s", yes_no);

	if ((strcmp(yes_no, "yes") == ZERO)) {
	    loop = 0;
	    
	    while (loop < customers) {
			
	    printf("\n\n\t\tCustomer %d name is:- %s", loop + 1, names[loop]);
	      loop++;
	      
	    }
	}
	else {
		
	    printf("\n\n\n\n\t\t\tThankx for coming, Have a Great Day !!");
	    return 0;
	    
	}

	return 0;

}
