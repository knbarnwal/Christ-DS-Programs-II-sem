#include<stdio.h>
#include<stdlib.h>
#include<string.h>

	int main()
	{
		int *prices,*sell_prices ;
		int *diff;
		
		

		prices = (int *)malloc(sizeof(int)*10);
		diff = (int *)calloc(20, sizeof(int));
		if (prices == 0)
		{
			printf("ERROR: Out of memory\n");
			return 1;
		}

		int total;
		
		printf("Program to store details of base metals with their prices ");
		printf("\n\nHow many base metal data do you want to enter:- ");
		scanf("%d", &total);
		char metal_names[total][30];
		for(int i=0; i<total; i++){
			printf("\n\nEnter name of metal %d:- ", i+1);
			scanf(" %s", metal_names[i]);
			printf("Enter the buy price of %s:- ", metal_names[i]);
			scanf("%d", &prices[i]);
			printf("Enter the day Difference of %s:- ", metal_names[i]);
			scanf(" %d", &diff[i]);
		}

		printf("Here is the list of data stored:-  ");
		printf("\n\n\t\tName \t\t buy Price \t\t Difference+- \n\n");
		for(int i=0; i<total; i++){
			printf("\t\t%s\t\t%d\t\t\t%d\n\n", metal_names[i], prices[i], diff[i]);
		}
		printf("\n\n\n nNow please enter:- ");
		
		sell_prices = realloc(prices, total * sizeof(int));
		for(int i=0; i<total; i++){
			printf("\n\n\t\t the sell price for %s :-", metal_names[i]);
			scanf("%d", &sell_prices[i]);
		}
		
		printf("\n\nHere is the list of data stored:-  ");
		printf("\n\n\t\tName \t\t Sell Price \t\t Difference+- \n\n");
		
		for(int i=0; i<total; i++){
			printf("\t\t%s\t\t%d\t\t\t%d\n\n", metal_names[i], sell_prices[i], diff[i]);
		}
		
		
		free(sell_prices);
		
		free(diff);

		return 0;
	}
