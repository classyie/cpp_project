#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void main()
{
clrscr();
int i,gd,gm;
float x,y,r,d;
cout<<"enter the radius";
cin>>r;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
d=3-2*r;
x=0;
y=r;
do{
putpixel(200+x,200+y,10);
putpixel(200+x,200-y,11);
putpixel(200-x,200-y,12);
putpixel(200-x,200+y,5);
putpixel(200+y,200+x,12);
putpixel(200+y,200-x,13);
putpixel(200-y,200-x,14);
putpixel(200-y,200+x,15);
if(d<0)
{
x=x+1;
y=y;
d=d+4*x+6;
}
else
{
x=x+1;
y=y-1;
d=d+4*(x-y)+10;
}
delay(10);
}
while(x<y);

getch();
 closegraph();
   }