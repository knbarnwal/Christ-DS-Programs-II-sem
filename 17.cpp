#include<stdio.h>
#include <graphics.h> 

int main()
{
	int x,y;
	int start_pie=245, end_pie=115;
    int i=30;
	int set = 0;
	int hr=1,vd=0,hl=0;
	
	initwindow(800, 700);
    for(x=500;x>=100;x-=40)
	{
		rectangle(x,95,x-10,85);
	}
	
	for(y=100;y<500;y+=40)
	{
		rectangle(100,y,90,y+10);
	}
	
	for(x=100;x<=530;x+=40)
	{
		rectangle(x,500,x-10,490);
	}
	
    x = 500,y=100;
	
	//draw_squares();
    setlinestyle(SOLID_LINE,1,2);
	while(1)
	{
    	setfillstyle(SOLID_FILL,WHITE);
    	if(set == 0)
    	{
			setcolor(WHITE);
			pieslice(x,y,start_pie,end_pie,50);
			start_pie -= 2;
			end_pie += 2;
			i++;
    		if(i >= 60)
    		{
    			set = 1;
			}
		}
		else
		{	
    		setcolor(BLACK);
			pieslice(x,y,start_pie,end_pie,50);  //pieslice
			start_pie += 2;
			end_pie -= 2;
			i--;
			if(i <= 30)
    		set = 0;
		}
		
		setcolor(BLACK);
		if(hr==1)
		{
			arc(x,y,270,90,52);	
			x--;
		}
		else if(vd==1)
		{
			arc(x,y-2,0,180,52);	
			y++;
		}
		else
		{
			arc(x,y-2,90,270,53);	
			x++;
		}
		delay(10);
		if(y>=500 && vd == 1)
		{
			vd=0;
			hl=1;
			setfillstyle(SOLID_FILL,BLACK);
			pieslice(x,y,0,360,50);
			start_pie = 30;
			end_pie = 340;
		}
		if(x<=100 && hr==1)
		{
			hr=0;
			vd=1;
			setfillstyle(SOLID_FILL,BLACK);
			pieslice(x,y,0,360,50);
			start_pie = 300;
			end_pie = 250;
		}
		if(x>550)
		break;
	}
	getchar();// pause screen	
}


