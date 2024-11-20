#include<conio.h>
#include<graphics.h>
void bf(int x ,int y,int fcolor,int bcolor)
{
    int current = getpixel(x,y);
    if(current != fcolor && current != bcolor)
    {
	putpixel(x,y,fcolor);
        bf(x+1,y,fcolor,bcolor);
        bf(x-1,y,fcolor,bcolor);
        bf(x,y+1,fcolor,bcolor);
        bf(x,y-1,fcolor,bcolor);
        bf(x+1,y+1,fcolor,bcolor);
        bf(x-1,y+1,fcolor,bcolor);
        bf(x+1,y-1,fcolor,bcolor);
        bf(x-1,y-1,fcolor,bcolor);
    }
}
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"C://TURBOC3//BGI");
    rectangle(150,100,300,250);
    setcolor(WHITE);
    int x = 200,y = 150;
    int fcolor = YELLOW;
    int bcolor = WHITE;
    bf(x,y,fcolor,bcolor);
    getch();
    closegraph();
    return 0;
 }
