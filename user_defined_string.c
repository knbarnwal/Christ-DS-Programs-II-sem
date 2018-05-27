#include<stdio.h>
#include<stdlib.h>

int main();
void display_first_name();
void display_full_name();
void display_last_name();
int str_length();

char atoA(char c);

void display_first_name(int customers, char first_name[][100]) {
  int i = 0;
  for (i = 0; i < customers; i++) {
    printf("\n\t\tCustomer %d is :- %s ", i + 1, first_name[i]);
  }
}

void display_last_name(int customers, char last_name[][100]) {
  int i = 0;
  for (i = 0; i < customers; i++) {
    printf("\n\t\tName of customer %d :- %s", i + 1, last_name[i]);
  }
}

void display_full_name(int customers, char * * full_name) {
  int i = 0;
  for (i = 0; i < customers; i++) {
    printf("\n\t\tName of customer %d :- %s", i + 1, full_name[i]);
  }
}

int str_length(char str[]) {

  int loop = 0;
  while (str[loop] != '\0') {
    loop++;
  }
  return loop;
}

char atoA(char c) {
  if (c >= 97 && c <= 122) {
    return c - 32;
  } else {
    return c;
  }
}

char * concat(char str1[], char str2[]) {

  char * str = malloc(sizeof(char) * 100);

  int i = 0;
  while (str1[i] != '\0') {
    str[i] = str1[i];
    str[i] = atoA(str[i]);
    i++;
  }

  i = str_length(str);

  str[i] = ' ';

  i += 1;
  int j = 0;

  while (str[j] != '\0') {
    str[i] = str2[j];
    i++;
    j++;
  }
  str[i] = '\0';
  return str;

}

void copy_str(int customers, char * * full_name, char first_name[][100], char last_name[][100]) {

  for (int i = 0; i < customers; i++) {

    full_name[i] = concat(first_name[i], last_name[i]);

  }
}

int str_compare(char str1[], char str2[]) {

  int len1 = str_length(str1);
  int len2 = str_length(str2);

  if (len1 != len2) {
    return 1;
  }
  int i = 0;
  for (i = 0; i < len1; i++) {

    if (str1[i] == str2[i]) {
      continue;
    } else {
      return 1;
    }
  }
  return 0;
}

int for_switch() {
  int options;
  printf("\n\nWhat Do you want to display:- ");
  printf("\n\t\t\t1. First Name");
  printf("\n\t\t\t2. Last Name\n");
  printf("\t\t\t3. Full Name");
  printf("\n\nPleas select the option(1-3):- ");
  scanf("%d", & options);

  return options;
}

int try_again() {
  char yes_no[4];
  printf("\n\nWould you like to run program again (yes/no):- ");
  scanf("%s", yes_no);
  if ((str_compare(yes_no, "yes") == 0)) {
    system("clear");
    main();
    return 0;
  } else {
    printf("Thank you for Using my program !!");
    return 0;
  }
}

int main() {
  printf("\n\n\t\t\t***Welcome to GetMeJewel database !! ***");

  int customers;

  printf("\n\nHow many customer details do you want to enter:- ");
  scanf("%d", & customers);

  char first_name[customers][100];
  char last_name[customers][100];
  char *full_name[customers];

  int i = 0;
  for (i = 0; i < customers; i++) {

    printf("\nEnter the First name of the Customer %d:- ", i + 1);
    scanf(" %s", first_name[i]);
    printf("\nEnter the Last name of the Customer %d:- ", i + 1);
    scanf(" %s", last_name[i]);
  }

  copy_str(customers, full_name, first_name, last_name);

  switch (for_switch()) {
  case 1:
    display_first_name(customers, first_name);
    try_again();
    break;

  case 2:
    display_last_name(customers, last_name);
    try_again();
    break;

  case 3:
    display_full_name(customers, full_name);
    try_again();
    break;
  }

  return 0;
}
