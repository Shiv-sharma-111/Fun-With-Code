#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	clrsrc();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	for(int i=0;i<500;i++)
	{
		//Body of the car
		line(50+i,370,90+i,370);
		arc(110+i,370,0,180,20);
		line(130+i,370,220+i,370);
		arc(240+i,370,0,180,20);
		line(260+i,370,300+i,370);
		line(300+i,370,300+i,350);
		line(300+i,350,240+i,330);
		line(240+i,330,200+i,300);
		line(200+i,300,110+i,300);
		line(110+i,300,80+i,330);
		line(80+i,330,50+i,340);
		line(50+i,340,50+i,370);
		//Car Window
		line(165+i,305,165+i,330);
		line(165+i,330,230+i,330);
		line(230+i,330,195+i,305);
		line(120+i,305,160+i,305);
		
		line(160+i,305,160+i,330);
		line(160+i,330,95+i,330);
		line(95+i,330,160+i,305);
		line(120+i,305,160+i,305);
		//Car Wheels
		circle(110+i,370,17);
		circle(240+i,370,17);
		delay(10);
		cleardevice();
		
		line(0,390,639,390);
	}
	getch();
}