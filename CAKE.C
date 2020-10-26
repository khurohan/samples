#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{ int gd=DETECT,gm,i;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

  //frame
  line(0,0,getmaxx(),0);
  line(0,0,0,getmaxy());
  line(getmaxx(),0,getmaxx(),getmaxy());
  line(0,getmaxy(),getmaxx(),getmaxy());

  //cake
  setcolor(6);
  fillellipse(320,400,160,60);

  setcolor(14);
  for(i=0;i<50;i++)
  { ellipse(320,400-i,0,360,160,60);
    delay(25);
  }

  fillellipse(320,350,160,60);
  setcolor(10);
  for(i=0;i<50;i++)
  { ellipse(320,350-i,0,360,120,45);
    delay(25);
  }

  fillellipse(320,300,120,45);
  setcolor(12);
  for(i=0;i<50;i++)
  { ellipse(320,300-i,0,360,70,25);
    delay(25);
  }

  getch();
  closegraph();
}