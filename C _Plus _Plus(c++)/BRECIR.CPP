#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
int r,gd,gm;
float x,y,d;
cout<<"enter radius";
cin>>r;
x=0;
y=r;
d=3-2*r;
gd=DETECT;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
do
{
putpixel(x+200,y+200,1);
putpixel(200-x,y+200,3);
putpixel(x+200,200-y,5);
putpixel(200-x,200-y,7);
putpixel(y+200,x+200,9);
putpixel(200-y,x+200,11);
putpixel(y+200,200-x,13);
putpixel(200-y,200-x,15);

if(d<0)
{
d=d+4*x+6;
}
else
{
d=d+4*(x-y)+10;
y=y-1;
}
x=x+1;
delay(10);
}while(x<y);
getch();
closegraph();
}
