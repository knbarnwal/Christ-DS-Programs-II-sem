#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern int items;

void stock() {

  static int rings = 10;
  static int pendants = 5;
  register int lockets = 7;
  auto int sets = 29;
  printf("\n\n\t\t\t1. Rings = %d", rings);
  printf("\n\t\t\t2. Pendants = %d", pendants);
  printf("\n\t\t\t3. Sets = %d", sets);
  printf("\n\t\t\t4. lockets = %d", lockets);
}


void start(){
	  auto char confirm[4];
	  char yes_no[4] = "yes";
	  register int ZERO = 0;

	  printf("\n\t\t***Welcome to GetMejewel Inventory***\n");

	  printf("\n\nWould you like to see your stock (yes/no):- ");

	  scanf(" %s", confirm);

	  if ((strcmp(confirm, yes_no) == ZERO)) {

			printf("\n\n\nYour Inventory has following items");
			stock();
	  } else {
			system("clear");
			printf("Please press 'yes', else it will not proceed !!\n\n\n");
			start();
	  }
}
int main() {

  start();
  return 0;
}
