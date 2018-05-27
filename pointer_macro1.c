#include<stdio.h>
int disp();
int main(){
	
	disp();
	return 0;
}
int disp()
{
int table[3][5]={{1,2,3,4,5},{6,7,8,9,10}, {11,12,13,14,15}};
int i,j;
  for(i = 0 ; i < 3 ; ++i)
  {
     
      for(j = 0; j < 5; ++j)
       {
        	if( table[i][j] > 9 )
        		{
       			   printf(" %d |", *(*(table +i)+j));                         // dereferncing 2d array.--3
       		    }
		    else{
       			   printf(" %d  |", *(*(table +i)+j));
      			}
       }
    		 printf("\n----------------------------\n");
  }

return 0;
}
