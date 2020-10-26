#include<stdio.h>
#include<graphics.h>

void main()
{ int i,gd=DETECT,gm,x,y,dx,dy,x0,y0,x1,y1,p0,p;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  x0=200;
  y0=200;
  x=x0;
  y=y0;
  x1=200;
  y1=200;
  dx=x1-x0;
  dy=y1-y0;
  p0=2*dy-dx;
  p=p0;
  while(x!=x1+1)
  { putpixel(x,y,15);
    if(p<=0)
    { p=p+2*dy; }
    else
    { y=y+1;
      p=p+2*dy-2*dx;
    }
    x++;
  }
  getch();
  closegraph();
}
