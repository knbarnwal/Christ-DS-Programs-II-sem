#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define HUNDRED 100
#define ONE 1
#define ZERO 0
#define SMALL_A 97
#define SMALL_Z 122
#define CON 32

int main();
void display_full_name();
void display_last_name();
int str_length();

char atoA(char c);

void display_full_name(int customers, int loan[], char **full_name) {
  int i = ZERO;
  printf("\n\n\t\t  Name  \t \t\tLoan Amount\n\n");
  for (i= ZERO ; i < customers; i++) {
    printf("\n\t\t %s  \t %d", full_name[i], loan[i]);
  }
}

int str_length(char str[]) {

  int loop = ZERO;
  while (str[loop] != '\0') {
    loop++;
  }
  return loop;
}

char atoA(char c) {
  if (c >= SMALL_A && c <= SMALL_A) {
    return c - CON;
  } else {
    return c;
  }
}

char * concat(char str1[], char str2[]) {

  char * str = malloc(sizeof(char) * HUNDRED);

  int i = ZERO;
  while (str1[i] != '\0') {
    str[i] = str1[i];
    str[i] = atoA(str[i]);
    i++;
  }

  i = str_length(str);

  str[i] = ' ';

  i += ONE;
  int j = ZERO;

  while (str[j] != '\0') {
    str[i] = str2[j];
    i++;
    j++;
  }
  str[i] = '\0';
  return str;

}

void copy_str(int customers, char * * full_name, char first_name[][HUNDRED], char last_name[][HUNDRED]) {

  for (int i = ZERO; i < customers; i++) {

    full_name[i] = concat(first_name[i], last_name[i]);

  }
}

int str_compare(char str1[], char str2[]) {

  int len1 = str_length(str1);
  int len2 = str_length(str2);

  if (len1 != len2) {
    return ONE;
  }
  int i = ZERO;
  for (i = ZERO; i < len1; i++) {

    if (str1[i] == str2[i]) {
      continue;
    } else {
      return ONE;
    }
  }
  return ZERO;
}

int try_again() {
  char yes_no[4];
  printf("\n\nWould you like to run program again (yes/no):- ");
  scanf("%s", yes_no);
  if ((str_compare(yes_no, "yes") == ZERO)) {
    system("clear");
    main();
    return ZERO;
  } else {
    printf("Thank you for Using my program !!");
    return ZERO;
  }
}

int main() {
  printf("\n\n\t\t\t***Welcome to GetMeJewel loan Database !! ***");

  int customers;

  printf("\n\nHow many customers did you gave loan to:- ");
  scanf("%d", & customers);

  char first_name[customers][HUNDRED];
  char last_name[customers][HUNDRED];
  char *full_name[customers];
  int loan[customers];

  int i = ZERO;
  for (i = ZERO; i < customers; i++) {

    printf("\nEnter the First name of the Customer %d:- ", i + ONE);
    scanf(" %s", first_name[i]);
    printf("\nEnter the Last name of the Customer %d:- ", i + ONE);
    scanf(" %s", last_name[i]);
    printf("\nHow much money do you own:- ");
    scanf("%d", &loan[i]);
  }

  copy_str(customers, full_name, first_name, last_name);

	char yes_no[4];
	printf("\n\nDo you want to print the customer name with loan amount(yes/no):- ");
	scanf("%s", yes_no);
	if((strcmp(yes_no, "yes")== ZERO)){
		display_full_name(customers, loan, full_name);
	}
	else exit(0);
		
   
  return ZERO;
}
