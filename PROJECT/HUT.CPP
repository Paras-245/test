#include<conio.h>
#include<graphics.h>
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"C://TURBOC3//BGI");
    
    rectangle(200,200,400,350);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    floodfill(201,201,WHITE);
    
    line(200,200,300,100);
    line(300,100,400,200);
    line(200,200,400,200);
    setfillstyle(SOLID_FILL,RED);
    floodfill(300,150,WHITE);
    
    rectangle(270,270,330,350);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(271,271,WHITE);
    rectangle(220,230,260,270);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(221,231,WHITE);
    rectangle(340,230,380,270);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(341,231,WHITE);
    getch();
    closegraph();
    return 0;
    }
    
    
