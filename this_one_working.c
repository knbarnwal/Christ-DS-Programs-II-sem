#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define loop(X) for (i = 0; i < X; i++)
#define N 5
#define THIRTY 30
#define FIVE 5
#define TEN 10
#define THREE 3
#define ZERO 0
#define DEFAULT_ONE_ARR 2900
#define DEFAULT_TWO_ARR 1700
#define GOLD 30000
#define SILVER 3789
#define PLATINUM 37933
#define BRONZE 200
#define TITANIUM 2932
#define THOUSAND 1000
#define ONE 1
#define TWO 2



int str_length(char str[]) {

  int loop = ZERO;
  while (str[loop] != '\0') {
    loop++;
  }
  return loop;
}



char * concat(char str1[], char str2[]) {

  char * str = malloc(sizeof(char) * (THOUSAND/TEN));

  int i = ZERO;
  while (str1[i] !=  '\0') {
    str[i] = str1[i];
    str[i] = str[i];
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

void copy_str(int customers, char * * full_name, char first_name[][THIRTY], char last_name[][THIRTY]) {

  for (int i = ZERO; i < customers; i++) {

    full_name[i] = concat(first_name[i], last_name[i]);

  }
}

int main(){
	char first_name[TWO][THIRTY];
	char last_name[TWO][THIRTY];
	
	char *full_name[THIRTY];
	printf("************************************************************************");
	printf("\n\n\t\t\tWelcome to GetMeJewel !!\n\n");
	printf("------------------------------------------------------------------------");
	printf("----------------------------------------------------------------------------------------");
	printf("\n\n\t\t\tWelcome User\n");
	printf("\nSir, Your First name please: ");
	
    scanf(" %s", first_name[ZERO]);
    printf("\nEnter the Last name:- ");
    scanf(" %s", last_name[ZERO]);
    
    printf("\nEnter your nick name:- ");
     scanf(" %s", first_name[ONE]);
     
  copy_str(TWO, full_name, first_name, last_name);
	
	
  
	printf("\n\n\tWelcome %s, or Should we call Mr. %s\n", full_name[ZERO], full_name[ONE]);
	
	printf("------------------------------------------------------------------------");
	printf("----------------------------------------------------------------------------------------");
	
	printf("\n\nFollowing are the prices of base Metals we sell :- \n");
	float faray[N], *fptr;
	
         int *iptr, iaray[N], i;
         char metals[TEN][TEN]={{"Platinum"}, {"Gold"},{"Bronze"}, {"Titanium"}, {"Silver"}};

         /* initialize */
         loop(N) {
              faray[i] = DEFAULT_ONE_ARR;
              iaray[i] = DEFAULT_TWO_ARR;
         }


         /* initialize fptr to point to element faray[3] */
         fptr = &faray[THREE];
         *fptr = GOLD;             
         *(fptr--) = SILVER;        
         *(fptr++) = PLATINUM;       
		 int deref = *(fptr --) + THOUSAND;

         /* initialize iptr in the same way */
         iptr = &iaray[THREE];
         *iptr = TITANIUM;
         *(iptr - ONE) = BRONZE;
         *(iptr + ONE) = SILVER;


         loop(N) {
              printf("\n\t\t\tPrice of %s = %d /gm\n",metals[i], iaray[i]);
         }
         printf("\n\n\t\t\tIf you buy 20gm of any \n\n\t\t\tmetal we will gift you \n\n\n\n\t\t\t***Rs. %d coupans***", deref);
         
        
         return ZERO;
     }
