#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BITS_IN_BYTE 8
#define INT_TYPE unsigned int

void showBits(INT_TYPE x) {
    int i;
    static int intSizeInBits = sizeof(INT_TYPE) * BITS_IN_BYTE;
    static char symbol[2] = {'0','1'};
    char * binary = (char*) malloc(intSizeInBits + 1);

    memset(binary, 0, intSizeInBits + 1);

    for (i=0; i< intSizeInBits; i++) {
        binary[intSizeInBits-i-1] = symbol[(x>>i) & 0x01];
    }

    printf("%s\n", binary);
    free(binary);
}

int main() {
	
	   int select;
	   printf("\n\t\t*********Get Me Jewel Bitwise Offer day!!*********");
	   printf("\n\nChoose whch Bit operation you want to use:- ")          ;
	   printf("\n\t\t\t1. &\n\t\t\t2. |\n\t\t\t3. ^\n\t\t\t4. ~\n\t\t\t5. >>\n\t\t\t6. <<");
	   printf("\n\nSelect (1-6):- ");
	   scanf("%d", &select);
	   printf("\n\t***Offer***\t\t\t\t***Bitwise Coupon code***\n\n");
	   switch(select){
		   case 1: printf("\n\n\tYou will get 10 gm of gold \t\t" );
					showBits(10);
				   printf("\n\tWorth Rs.29000\t\t\t\t");
				   showBits(29000);
				   printf("\n\tJust for :- Rs. %d \t\t\t",10 & 29000);
				   showBits(10&29000);
				   break;
		   case 2: printf("\n\n\tYou will get 10 gm of gold \t\t" );
					showBits(10);
				   printf("\n\tWorth Rs.29000\t\t\t\t");
				   showBits(29000);
			
				   printf("\n\tJust for :- Rs. %d \t\t\t",10 | 29000);
				   showBits(10|29000);
				   break;
		   case 3: printf("\n\n\tYou will get 10 gm of gold \t\t" );
					showBits(10);
				   printf("\n\tWorth Rs.29000\t\t\t\t");
				   showBits(29000);
				   printf("\n\tJust for :- Rs. %d \t\t\t",10 ^ 29000);
				   showBits(10^29000);
				   break;
		   case 4: printf("\n\n\tYou will get 10 gm of gold \t\t" );
					showBits(10);
				   printf("\n\tWorth Rs. 29000\t\t\t\t");
				   showBits(29000);
				   printf("\n\tJust for  Rs. %d \t\t\t", ~29000);
				   showBits(~29000);
				   break;
		   case 5: printf("\n\n\tYou will get 10 gm of gold \t\t" );
					showBits(10);
				   printf("\n\tWorth Rs.29000\t\t\t\t");
				   showBits(29000);
				   printf("\n\tJust for :- Rs. %d \t\t\t",29000 >> 10);
				   showBits(29000 >> 10);
				   break;
		   case 6: printf("\n\n\tYou will get 10 gm of gold \t\t" );
					showBits(10);
				   printf("\n\tWorth Rs.29000\t\t\t");
				   showBits(29000);
				   printf("\n\tJust for:- Rs. %d \t\t\t",29000 << 10);
				   showBits(29000 << 10);
				   break;
			   }
	
	return 0;
}
