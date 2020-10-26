#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void plot(float x0,float y0,float x1,float y1)
{ int gd=DETECT,gm,i,steps;
  float dx,dy,xin,yin;
  dx=x1-x0;
  dy=y1-y0;
  if(abs(dx)>=abs(dy))
  { steps=dx; }
  else
  { steps=dy; }
  xin=dx/steps;
  yin=dy/steps;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  line(0,0,0,getmaxx());
  line(0,0,0,getmaxy());
  for(i=0;i<=steps;i++)
  { putpixel(x0,y0,15);
    x0=x0+xin;
    y0=y0+yin;
  }
  getch();
  closegraph();
}

void main()
{ clrscr();
  plot(0,0,100,40);
  plot(639,0,380,100);
}