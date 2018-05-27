
/*****************************************************************
 * 																 *
 * 																 *
 * 			Implementation of multi dimentional array			 *
 * 																 *
 * 																 *
 * 																 *
 *****************************************************************/

#include<stdio.h>

#define GOLD 30
#define SILVER 30
#define ZERO 0
#define GOLD_PRICE 28000
#define SILVER_PRICE 44000
#define ONE 1
#define G_CHN_IN_PRICE 237
#define S_CHN_IN_PRICE 339


int main() {



	int array[GOLD][SILVER];
	int loop = ONE;
	int gold_price = GOLD_PRICE;
	int silver_price = SILVER_PRICE;


	printf("\n\n\t\t***Implementation of multi dimentional array***\n\n\n\n");
	printf("\n\tFollowing programs shows the average price of Gold \n");
	printf("\t  and silver per day in the month of June 2017\n\n\t ");
	
	for (int i = ZERO; i < GOLD; i++) {
		
		printf("--");
		
	}

	printf("\n\t\tDay of June \t Gold price\t Silver price\n\n");
	
	
	for (loop = ZERO; loop < GOLD; loop++) {
	
		array[loop][ZERO] = gold_price;
		array[loop][ONE] = silver_price;
		gold_price += G_CHN_IN_PRICE;
		silver_price += S_CHN_IN_PRICE;
	
	}


	for (loop = ZERO; loop < GOLD; loop++) {

		printf("\t\t%d \t \t %d \t\t %d\n", loop + ONE, array[loop][ZERO], array[loop][ONE]);
	
	}

	return ZERO;

}
