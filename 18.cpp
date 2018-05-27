#include<stdio.h>
#include <graphics.h>

void robot();
void mickey();
void shapes();
void not_to_show();

int main()
{
	initwindow(1366, 768);
	//shapes();
	//mickey();
	robot();
	//not_to_show();
	getchar();	
}

void shapes()
{
	
	int coord[] = {50,450,100,430,140,470,110,500,50,450};
    //Coordinates for Fill Poli
	int fill_coord[] = {150,450,200,430,240,470,210,500};

    setcolor(WHITE);
    setlinestyle(SOLID_LINE,1,1);
    circle(100,100,50);
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(102, 100, WHITE);
    
    
   
    arc(250,100,180,360,50);
    
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(250, 100, WHITE);
    
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(250, 100, 15);
    
   
    setfillstyle(WIDE_DOT_FILL, LIGHTBLUE);
    pieslice(400,100,0,270,50);
  
  
  
    setlinestyle(SOLID_LINE,1,1);
    //change line style and see output
        
        
    rectangle(50,180,160,260);
    setfillstyle(LTSLASH_FILL, LIGHTBLUE);
    floodfill(52, 182, WHITE);

    
    setfillstyle(XHATCH_FILL, LIGHTBLUE);
    bar(210,180,320,260);


    bar3d(370,180,480,260,20,0);
    //change top flag to zero and see output 
    

    ellipse(100,350,0,180,50,25);
	

	setlinestyle(SOLID_LINE,1,1);
	fillellipse(260,350,50,25);

	
	sector(420,350,0,270,50,25);

	
	drawpoly(5,coord);
	floodfill(100,460,WHITE);
	
	
	fillpoly(4,fill_coord); 
	

}


void mickey()
{
	//BAckground
	cleardevice();
	setlinestyle(SOLID_LINE,1,3);
	setfillstyle(SOLID_FILL,WHITE);
   	floodfill(0,0,WHITE);
	setcolor(BLACK);
	
//Ear	
	arc(140,80,347,288,80);
	arc(488,80,255,190,80);
	
//head	
	arc(316,250,348,191,180);
	
	ellipse(268,196,58,232,60,105);
	ellipse(358,196,307,123,60,105);	

//cheeks
	arc(193,312,63,240,60);
	arc(435,312,296,117,60);	

	arc(294,213,228,252,200);
	arc(338,210,284,312,200);

//eyes cornea
	ellipse(284,215,310,239,23,70);
	ellipse(340,215,301,231,23,70);

	ellipse(312,290,30,150,90,50);


//eyes eyeball

	ellipse(294,220,68,243,15,30);
	ellipse(330,220,292,112,15,30);


//nose
	setfillstyle(SOLID_FILL,BLACK);
	fillellipse(312,290,70,30);

	
//mouth

	ellipse(312,290,190,350,130,70);
	arc(212,324,100,190,30);
	arc(412,324,350,80,30);
	
	ellipse(311,308,207,333,85,120);

//tongue
	arc(285,440,60,122,53);
	arc(335,440,55,130,53);
	
//chin
	ellipse(311,342,205,335,95,100);

	

	floodfill(140,80,BLACK);
	floodfill(488,80,BLACK);
	floodfill(140,250,BLACK);
	floodfill(294,220,BLACK);
	floodfill(330,220,BLACK);

	setfillstyle(SOLID_FILL,BROWN);
	floodfill(212,324,BLACK);
	
	setfillstyle(SOLID_FILL,RED);
	floodfill(311,420,BLACK);

	setfillstyle(SOLID_FILL,LIGHTRED);
	floodfill(311,380,BLACK);


}

void robot()
{

//setfillstyle(SOLIDFILL,BLACK);
	cleardevice();
	setcolor(WHITE);
	setlinestyle(SOLID_LINE,1,2);

  int a[] = {183,246,309,246,294,305,198,305,183,246};
  int b[] = {230,370,248,390,248,400,210,400,210,390,230,370};
  int c[] = {270,370,290,390,290,400,252,400,252,390,270,370};
  int d[]={172,160,320,160,320,240,305,320,187,320,172,240,172,160};


//head
   rectangle(200,100,290,150);
   rectangle(190,110,200,140);
   rectangle(290,110,300,140);
   arc(245,100,0,180,10);
   bar(241,70,249,90);

   circle(245,65,5);

//left eye
   circle(225,115,10);
   circle(225,115,7);

//right eye
   circle(265,115,10);
   circle(265,115,7);

//mouth
   rectangle(216,133,275,143);
   rectangle(218,135,273,141);

//neck
   bar(235,150,255,155);
   bar(235,155,255,160);

//body

   drawpoly(7,d);

   rectangle(183,175,236,208);
   rectangle(186,178,233,205);

   rectangle(236,175,256,208);
   rectangle(239,178,253,205);

   circle(188,224,6);
   circle(204,224,6);
   circle(220,224,6);
   circle(236,224,6);

   circle(282,182,6);
   circle(282,182,9);

   circle(282,209,6);
   circle(282,209,9);

//left leg
   bar(220,320,240,380);
   drawpoly(6,b);

//Right Leg
   bar(260,320,280,380);
   drawpoly(6,c);

   setfillstyle(HATCH_FILL,WHITE);
   fillpoly(5,a);

//left hand
   setfillstyle(SOLID_FILL,WHITE);
   bar(168,170,172,190);
   rectangle(138,166,168,194);
   bar(148,194,158,240);
   arc(153,252,340,210,12);
   arc(153,252,340,210,6);
   line(141,256,147,254);
   line(159,254,165,256);

//right hand
   bar(320,170,324,190);
   rectangle(324,166,354,194);
   bar(334,194,344,240);
   arc(339,252,340,210,12);
   arc(339,252,340,210,6);
   line(327,256,333,254);
   line(345,254,351,256);


}

void not_to_show()
{
   cleardevice();
   setcolor(WHITE);
   rectangle(80,150,120,250);
   rectangle(120,150,160,250);
   rectangle(160,150,200,250);
   line(80,150,140,50);
   line(140,50,200,150);
   line(140,50,340,50);
   line(340,50,400,150);
   line(200,150,400,150);
   line(400,150,400,250);
   line(200,250,400,250);
   line(120,250,90,350);
   line(160,250,130,350);
   line(0,350,1000,350);
   circle(140,100,20);
   setfillstyle(SOLID_FILL,RED);
   pieslice(550,40,0,360,25);
   arc(530,100,0,90,10);
   arc(550,100,90,180,10);
   arc(550,120,0,90,10);
   arc(570,120,90,180,10);
   arc(570,100,0,90,10);
   arc(590,100,90,180,10);
   setfillstyle(HATCH_FILL,RED);
   floodfill(82,152,WHITE);
   floodfill(122,152,WHITE);
   floodfill(162,152,WHITE);
   setfillstyle(HATCH_FILL,GREEN);
   floodfill(202,152,WHITE);
   setfillstyle(SLASH_FILL,BLUE);
   floodfill(142,102,WHITE);
   setfillstyle(SOLID_FILL,RED);
   floodfill(82,52,WHITE);
   setfillstyle(SOLID_FILL,3);
   floodfill(82,52,WHITE);
   setfillstyle(SOLID_FILL,BROWN);
   floodfill(2,352,WHITE);
}
