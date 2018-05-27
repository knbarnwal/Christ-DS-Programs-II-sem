#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

void to_buy(int num, char metals[][10]) {
	int i;
	printf("\n\t\t\t\tCongratulations !! \n\t\t\tYou are our lucky Customer");
	printf("\n\n\t\tWe are giving away following metals worth 10 gm for free !!\n\n");
	for (i = 0; i < num; i++) {
		printf("\t\t**%s**", metals[i]);
    }

}

int proceed() {

	int num, i;
	char metals[4][10];
	printf("\n\n\nHow many metals Would you like to buy:- ");
	scanf("%d", & num);
	for (i = 0; i < num; i++) {
		printf("\n\nWhat's the metal %d, Please name it:-  ", i + 1);
		scanf(" %s", metals[i]);
	}

	to_buy(num, metals);
	return 0;

}
void vice_versa_reference(int * gold, int * silver) {

	int temp;
	temp = * gold; * gold = * silver; * silver = temp;
	printf("\n\n\t\t\t\t 1.Gold = Rs.%d / 10 kg", * gold);
	printf("\n\n\t\t\t\t 2.Silver = Rs.%d / 10gm", * silver);
}

void vice_versa_value(int plat, int bronze) {

	int temp = bronze;
	bronze = plat;
	plat = temp;
	printf("\n\n\t\t\t\t 3.Platinum = Rs.%d / kg", plat);
	printf("\n\n\t\t\t\t 4.Bronze = Rs.%d / 10gm", bronze);

}
int start() {
	
	printf("\n\t\t\t***Welcome To GetMeJewel***\n");
	printf("\n\n\t***Today's Offer !!***");
	printf("\n\n\t\tGet Gold at the price of silver and vice versa\n");
	printf("\t\tGet Platinum at the price of bronze and vice versa\n\n");

	int gold = 29000;
	int silver = 40000;
	int platinum = 33000;
	int bronze = 1200;
	char yes_no[4];
	printf("\n\nToday's Market base metal price are:- ");
	printf("\n\n\t\t 1.Gold = Rs.%d / 10 gm", gold);
	printf("\n\n\t\t 2.Silver = Rs.%d / kg", silver);
	printf("\n\n\t\t 3.Platinum = Rs.%d / 10 gm", platinum);
	printf("\n\n\t\t 4.Bronze = Rs.%d / kg", bronze);
	printf("\n\nNow, would you like to know our Offer Price(yes/no):- ");
	scanf(" %s", yes_no);

	if ((strcmp(yes_no, "yes") == 0)) {
		system("clear");
		printf("\n\n\t\t\t***Our Offer price***");
		vice_versa_reference( & gold, & silver);
		vice_versa_value(platinum, bronze);
		proceed();
	}
	else {
    
    return start();
	}
	return 0;
}

int main() {

	start();
	return 0;

}
