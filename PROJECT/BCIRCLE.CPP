/*circle using Bresenham's method*/
#include <graphics.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>

void main()
{
   int gdriver = DETECT, gmode,h,k,r,d,x,y;
   printf("\nEnter centre(h,k) of circle : ");
   scanf("%d%d",&h,&k);
   printf("\nEnter radius: ");
   scanf("%d",&r);
   x=0;
   y=r;
   d=3-2*r;
   initgraph(&gdriver,&gmode,"C://TURBOC3//BGI");
   while(x<=y)
	{
	putpixel(x+h,y+k,RED);
	putpixel(x+h,-y+k,RED);
	putpixel(-x+h,y+k,RED);
	putpixel(-x+h,-y+k,RED);
	putpixel(y+h,x+k,RED);
	putpixel(y+h,-x+k,RED);
	putpixel(-y+h,x+k,RED);
	putpixel(-y+h,-x+k,RED);

	if(d<=0)
	  {
	  d=d+4*x+6;
	  }
	else
	  {
	  d=d+4*(x-y)+10;
	  y=y-1;
	  }
	x=x+1;
	}
   getch();
   closegraph();
}
