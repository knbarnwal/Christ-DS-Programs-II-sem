#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct items{
		char item[20];
		float grams;
		double cost;
	}itm;

typedef struct reciepts{
	char name[30];
	char phn_nmbr[10];
	unsigned long total_cost;
	itm t[10];
	
}reciept;



void gotoxy(int x,int y){
	
	printf("%c[%d;%df",0x1B,y,x);
	
}



void box(){
	
	int hor_row, ver_col;
	gotoxy(22,7);
	printf("***GetMeJewel Reciept Program !!***");
	for(hor_row=10; hor_row<70; hor_row++){
		gotoxy(hor_row, 3);
			printf("*");
		gotoxy(hor_row, 4);
			printf("*");
		
		
	}
	
	for(hor_row=13; hor_row<70; hor_row++){
		gotoxy(hor_row, 22);
			printf("*");
		gotoxy(hor_row, 21);
			printf("*");
		
	}
	
	for(ver_col=3; ver_col<23; ver_col++){
		gotoxy(10, ver_col);
			printf("*");
		gotoxy(11, ver_col);
			printf("*");
		gotoxy(12, ver_col);
			printf("/");
		
		
	}
	
		
	for(ver_col=3; ver_col<23; ver_col++){
		gotoxy(70, ver_col);
			printf("*");
		gotoxy(69, ver_col);
			printf("*");
		gotoxy(68, ver_col);
			printf("/");
		
	}
	
}


int main(){
	
	
	reciept r[10];
	
	FILE *fptr;
	fptr= fopen("Customer_records.txt", "w");
	
	
	int i=0, j=0;
	
	//int total_items;
	
	while(i<10){
		system("clear");
		box();
		r[i].total_cost=0;
		gotoxy(20, 10);
		printf("Customer Name:- ");
		scanf(" %[^\n]s", r[i].name);
		gotoxy(20, 12);
		printf("Enter %s phone number:- ", r[i].name);
		scanf(" %[^\n]s", r[i].phn_nmbr);
		fprintf(fptr, "Customer name:- %s\nPhone:- %s\n\n", r[i].name, r[i].phn_nmbr);
		fprintf(fptr, "--------------------------------------------------------------\n\n");
		fprintf(fptr, "\t items Purchased \t Weight\t\t Cost\n ");
		
		while(j<10){
			system("clear");
			box();
			gotoxy(20, 10);
			printf("Name the item purchased:- ");
			scanf(" %[^\n]s", r[i].t[j].item);
			gotoxy(20, 12);
			printf("What is the weight of %s :- ", r[i].t[j].item);
			scanf("%f", &r[i].t[j].grams);
			r[i].t[j].cost = 2900* r[i].t[j].grams;
			fprintf(fptr, "\n%d\t %s \t\t %0.2f \t\t Rs.%0.2f", j+1, r[i].t[j].item, r[i].t[j].grams, r[i].t[j].cost);
			gotoxy(19, 16);
			j++;
			char yn;
			printf("Do you want to enter more item(y/n):- ");
			scanf(" %c", &yn);
			if(yn =='y'){
				continue;
			}
			else{
				//total_items = j;
				fprintf(fptr, "\n--------------------------------------------------------------\n\n");
				while(j>=0){
					r[i].total_cost += r[i].t[j].cost;
					j--;
				}
				fprintf(fptr, "\t\t\t\t  Total Rs. %lu", r[i].total_cost);
				fprintf(fptr, "\n--------------------------------------------------------------\n\n");
				
				
				
				fclose(fptr);
				char yn;
				gotoxy(19, 18);
				printf("Do you want to get the reciept(y/n):- ");
				scanf(" %c", &yn);
				if(yn == 'y'){
					fptr = fopen("Customer_records.txt", "r");
					system("clear");
					char ch = fgetc(fptr);
					while(ch != EOF){
						printf("%c", ch);
						ch = fgetc(fptr);
					}
					
					fclose(fptr);
				}
				else{
					system("clear");
					box();
					gotoxy(25, 13);
					printf("Thank You, Have a Happy Shopping !!");
					gotoxy(1, 28);
					exit(0);
				}
				break;
			}
		
		}
		printf("Make new reciept(y/n) :- ");
		char yn;
		scanf(" %c", &yn);
		if(yn == 'y'){
			continue;
			system("clear");
			
			fptr = fopen("Customer_records.txt", "a");
			i++;
		}
		else{
			system("clear");
			box();
			gotoxy(25, 13);
			printf("Thank You, Have a Happy Shopping !!");
			gotoxy(1, 28);
			exit(0);
		}
	}
	return 0;
}
