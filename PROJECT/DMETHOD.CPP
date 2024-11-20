#include<graphics.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"C://TURBOC3//BGI");
    int x1 = 100,y1 = 100,x2= 200,y2= 200;
    float m = float((y2-y1)/(x2-x1));
    float c = y1 - m*x1;
    if(m <= 1)
    {
	for(int x = x1;x <= x2;x++)
	{
	    int y = floor(m*x+c);
	    putpixel(x,y,WHITE);
	}
    }
    else
    {
	for(int y = y1; y <= y2;y++)
	{
	    int x = floor((y-c)/m);
	    putpixel(x,y,WHITE);
        }
    }
    getch();
    closegraph();
    return 0;
}