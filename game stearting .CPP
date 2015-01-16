
#include<graphics.h>
#include<conio.h>
#include<dos.h>


void main()
{
   clrscr();
   int gd=DETECT,gm;
   int font=10,font1=4;
   int i=0;
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
      delay(1000);

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

      delay(2000);
      setcolor(5);
      settextstyle(font,HORIZ_DIR,7);
      outtextxy(200,200,"LEVEL 1");
      delay(1000);
      getch();

}

