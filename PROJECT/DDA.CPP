#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"C://TURBOC3//BGI");
    int x1 = 100,y1 = 100,x2= 200,y2= 200;
    int m = float((y2-y1)/(x2-x1));
    int x = x1,y = y1;
    putpixel(x,y,RED);
    if(m<=1)
    {
	while(x<=x2)
	{
	    x=x+1;
	    y = y+m;
	    putpixel(x,y,RED);
	}
    }
    else{
	while(y1<=y2)
	{
	    y = y+1;
	    x = x+(1/m);
	    putpixel(x,y,RED);
	}
    }
    getch();
    closegraph();
    return 0;
}
