#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main()
{
int i=1,r,gd,gm ;
float x,y,sx,sy,x2,y2,ep;
printf("enter the radius");
scanf("%d",&r);
detectgraph(&gd,&gm) ;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
sx=0;
sy=r;
x=sx;
y=sy;
while(r>=pow(i,2))
i++;
ep=1/pow(2,i);

do
{
x2=x+(y*ep);
y2=y-(x2*ep);
putpixel(x2+200,y2+200,15) ;
x=x2;
y=y2;
delay(1);
}
while((y-sy)<=ep||(sx-x)>ep);
getch();
closegraph();
}
