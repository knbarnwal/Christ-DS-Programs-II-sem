#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
typedef struct customers{
	
	char name[30];
	char id[5];
	
	
	union type{
		int student;
		int working;
	}typ;
}customer;
	
	
union phone{
	char phn_no[10];
}*ph, phi;
int main() 
{
	
	int total;
	printf("\n\nHow many customer details do you want to enter:- ");
	scanf("%d", &total);
	
	customer c[total], *cus, cu; 			//array of structure and union 
	cus = &cu;			//pointers to structure
	ph = &phi;			//pointers to union 
	
	for(int i=0; i<total; i++){
		
	printf("\n\nEnter the Name for customer %d : - ", i+1);
	scanf(" %[^\n]s", c[i].name);
	printf("\nEnter 5 digit id for %s :- ", c[i].name);
	scanf(" %[^\n]s", cus[i].id);
	printf("\nEnter phone number of %s :- ", c[i].name);
	scanf(" %[^\n]s", ph[i].phn_no);
	printf("\n%s is:- ",c[i].name);
	printf("\n\n\t\t1. Student\n\t\t2.Working");
	printf("\n\nSelect(1/2):- ");
	scanf("%d", &c[i].typ.student);
	if(c[i].typ.student==1){
		c[i].typ.student=1;
	}
	else {
		c[i].typ.working = 2;
	}
	}
	
	char types[2][30]= {{"Student"}, {"Working"}};
		
	char yn[2];
	printf("\n\n\nDo you want to see the details of what you entered(y/n):- ");
	scanf("%s", yn);
	if(strcmp(yn, "y")==0){
		printf("\n\n\t\tName\t\tPhone no\t Type\n");
		for(int i=0; i<total; i++){
			
			if(c[i].typ.student==1){
				printf("\n\n\t\t%s\t\t%s\t  %s", c[i].name, ph[i].phn_no, types[0]);
			}else{
				printf("\n\n\t\t%s\t\t%s\t  %s", c[i].name, ph[i].phn_no, types[1]);
			}
		}
			
		
		
	}
	
	else{
		printf("\n\n\n\t\tYour data has been entered !!");
		printf("\n\t\tThankx You, Have a great day !");
		exit(0);
	}
}
