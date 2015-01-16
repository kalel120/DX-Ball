
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>


void main()
{
   clrscr();
   int gd=DETECT,gm;
   int font=10,font1=4;
   int i=0;//int k=0;
   initgraph(&gd,&gm,"C:\\TC\\BGI");

     setbkcolor(WHITE);
     setcolor(BLUE);

     for(i=0 ;i<=100 ;i++)
     {
      settextstyle(font,HORIZ_DIR,6);
      outtextxy(200,i,"DX-Ball");
      delay(10);
      if(i==100)
	break;
      cleardevice();
     }
      delay(2000);

      setcolor(RED);
      settextstyle(font1,HORIZ_DIR,5);
      outtextxy(260,250,"The Game");
      getch();

      cleardevice();
      delay(1000);

      setcolor(GREEN);


      outtextxy(10,200,"Press Any key to Start the Game");
      delay(1000);
      getch();
      cleardevice();

     /* delay(2000);
      setcolor(5);
      settextstyle(font,HORIZ_DIR,7);
      outtextxy(200,200,"LEVEL 1");
      cleardevice();*/
      delay(1000);

      //now the game's code\\

	setbkcolor(0);
	int k=3,area,left=305,top=410,temp=0,te=0;
	void *p;
	char c;

	rectangle(1,1,638,418);

	for(int j=2;j<getmaxy()/2-30;j+=30)
	{
	 for(int i=2;i<getmaxx()-10;i+=30)
	 {
	  bar3d(i+k,j+k,i+31,j+30,3,3);
	 }
	}
	setcolor(WHITE);
	rectangle(305,410,335,417);
	setfillstyle(1,WHITE);
	floodfill(306,412,WHITE);

	setcolor(RED);
	circle(320,404,5);
	//rectangle(315,399,325,409);
	setfillstyle(SOLID_FILL,RED);
	floodfill(318,407,RED);

	area=imagesize(left,top,left+30,top+7);
	p=malloc(area);

	while(1)
	{
	temp=te=0;
	if(kbhit())
	{
	c=getch();
	if(c==77)
	{
	 if(left+30>=635);
	 else
	 {
	 temp=temp+5;
	 getimage(left,top,left+30,top+7,p);
	 putimage(left,top,p,XOR_PUT);
	 putimage(left+temp,top,p,XOR_PUT);
	 left=left+temp;
	 }
	}
	else if(c==75)
	{
	 if(left<=5);
	 else
	 {
	 te=te+5;
	 getimage(left,top,left+30,top+7,p);
	 putimage(left,top,p,XOR_PUT);
	 putimage(left-te,top,p,XOR_PUT);
	 left=left-te;
	 }
	}
	else  if(c==97)
	break;
	}
	}

	 getch();


}

