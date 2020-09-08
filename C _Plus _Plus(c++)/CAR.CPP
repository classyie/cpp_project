#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm,i=1;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
for(i=1;i<500;i++)
{
//road
line(0,322,700,322);
//H for Harshit
line(30+i,260,30+i,275);
line(40+i,260,40+i,275);
line(30+i,267,40+i,267);
//car Body
line(0+i,300,0+i,315);
line(0+i,300,13+i,298);
line(13+i,298,30+i,280);
line(30+i,280,80+i,280);
line(80+i,280,97+i,298);
line(97+i,298,120+i,300);
line(120+i,300,120+i,315);
line(0+i,315,25+i,315);
//Wheel 1 
arc(35+i,315,0,180,9);
circle(35+i,315,6);
line(45+i,315,67+i,315);
 //Wheel 2
arc(77+i,315,0,180,9);
circle(77+i,315,6);
line(85+i,315,120+i,315);
//winndow1
line(32+i,285,50+i,285);
line(50+i,285,50+i,295);
line(50+i,295,32+i,295);
line(32+i,295,32+i,285);
//window2
 line(60+i,285,78+i,285);
line(78+i,285,78+i,295);
line(78+i,295,60+i,295);
line(60+i,295,60+i,285);
delay(10);
cleardevice();
}

getch();
closegraph();
}
