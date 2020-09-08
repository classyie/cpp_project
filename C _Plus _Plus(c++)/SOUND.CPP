#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
clrscr();
int i;
for(i=0;i<=20;i++)
{
cout<<i;
sound(i*100);
delay(100);
}
nosound();
getch();
}