/* Implementation of arrays
 * 
 * C program to display the kinds of precious 
 * metals available in the whole world. */

#include<stdio.h>
#define NUM_METALS 11
#define CHAR_LIMIT 20

int main(){
	int loop=0;
	char metals[NUM_METALS][CHAR_LIMIT]={"Rhodium", "Platinum", "Gold", "Silver", "Ruthenium","Iridium","osmium", "Palladium","Rhenium","Indium","Californium 252"};
	
	printf("\n\n***This program shows some of the precious metals \n");
	printf("available throughout the whole world***\n\n");
	printf("Following is the list based on it's value respectively:- \n\n");
	for(loop=0; loop<NUM_METALS; loop++){
		
		printf("\t\t\t Metal %d is:- %s\n",loop+1, metals[loop]);
	}
	
	
	return 0;
}
















































































































