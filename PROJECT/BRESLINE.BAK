#include<conio.h>
#include<graphics.h>

void main()
{
    int gd = DETECT , gm;
    initgraph(&gd , &gm , "C://TURBOC3//BGI");
    int x1 = 100 , y1 = 100 , xf = 200 , yf = 200;
    int dx =xf-x1 , dy = yf-y1;
    int m = dy/dx , x=x1 , y=y1;
    putpixel(x , y , RED);
    int p = 2*(dy)-dx;
    if(m<1){
	while(x<=xf){
	    if(p<0){
		x=x+1;
		p = p+2*dy;
	    }else{
		x = x+1;
		y=y+1;
		p=p+2*(dy-dx);
	    }
	    putpixel(x, y ,RED);
	}}
	else{
	    while(y<=yf){
		if(p<0){
                    y=y+1;
                    p=p+2*dx;
                }
                else{
                    y=y+1;
                    x=x+1;
                    p=p+2*(dy-dx);
                }
                putpixel(x, y , RED);
            }
	}
    getch();
    closegraph();
}