#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>



void slope0p1(int x0,int y0,int x1,int y1)
{ int x,y,p,dx,dy;
  x=x0;
  y=y0;
  dx=x1-x0;
  dy=y1-y0;
  p=2*dy-dx;
  while(x!=x1+1)
  { putpixel(x,y,15);
    delay(1);
    if(p<=0)
    { p=p+2*dy; }
    else
    { y=y+1;
      p=p+2*dy-2*dx;
    }
    x++;
  }
}

void slope1pinf(int x0,int y0,int x1,int y1)
{ int x,y,p,dx,dy;
  x=x0;
  y=y0;
  dx=x1-x0;
  dy=y1-y0;
  p=2*dx-dy;
  while(y!=y1+1)
  { putpixel(x,y,15);
    delay(5);
    if(p<=0)
    { p=p+2*dx; }
    else
    { x=x+1;
      p=p+2*dx-2*dy;
    }
    y++;
  }
}

void slope0n1(int x0,int y0,int x1,int y1)
{ int x,y,p,dx,dy;
  x=x0;
  y=y0;
  x1=2*x0-x1;
  dx=x1-x0;
  dy=y1-y0;
  p=2*dy-dx;
  while(x!=x1+1)
  { putpixel(2*x0-x,y,15);
    delay(1);
    if(p<=0)
    { p=p+2*dy; }
    else
    { y=y+1;
      p=p+2*dy-2*dx;
    }
    x++;
  }
}

void slopen1ninf(int x0,int y0,int x1,int y1)
{ int x,y,p,dx,dy;
  y=y0;
  x1=2*x0-x1;
  dx=x1-x0;
  x=dx;
  dy=y1-y0;
  p=2*dx-dy;
  while(y!=y1+1)
  { putpixel(x1-x,y,15);
    delay(5);
    if(p<=0)
    { p=p+2*dx; }
    else
    { x=x+1;
      p=p+2*dx-2*dy;
    }
    y++;
  }
}

void main()
{ int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  line(0,0,getmaxx(),0);
  line(0,0,0,getmaxy());

  slope0p1(200,200,200,200);
  slope1pinf(350,125,350,185);
  slope0p1(500,155,600,155);
  slope1pinf(20,350,80,450);
  slope0n1(310,350,190,450);
  slope0p1(330,350,465,450);
  slopen1ninf(620,350,550,450);
  getch();
  closegraph();
}