//Drawing the flags of Bangladesh, Sweden, Bahrain and Morocco

#include "iGraphics.h"
#include <math.h>

int mposx,  mposy;

void drawBGDflag(double length)
{
	double x = 100;
	double y = 450;
	double height = 0.6*length;

	double centerx = x+0.45*length;
	double centery = y+0.5*(0.6*length);
	double rad = length/5;

	iSetColor(0, 103, 71);
	iFilledRectangle(x, y, length, height);
	iSetColor(218, 41, 28);
	iFilledCircle(centerx, centery, rad, 100);

	iSetColor(255, 255, 255);
	iText(x+0.15*length, y-50, "The Flag of Bangladesh", GLUT_BITMAP_TIMES_ROMAN_24);
}

void drawSWEflag(double width)
{
	double x = 600;
	double y = 450;
	double height = (width*10)/16;

	double hy = y+(height/10)*4;
	double vx = x+(width/16)*5;
	double thickness = (height/10)*2;

	iSetColor(45,95,161);
	iFilledRectangle(x, y, width, height);

	iSetColor(255,194,0);
	iFilledRectangle(x, hy, width, thickness);
	iFilledRectangle(vx, y, thickness, height);

	iSetColor(255, 255, 255);
	iText(x+0.15*width, y-50, "The Flag of Sweden", GLUT_BITMAP_TIMES_ROMAN_24);
}

void drawBAHflag(double length)
{
	double x = 100;
	double y = 90;
	double height = 0.6*length;

	double xtri = x + 0.25*length;
	double ytri = y;

	iSetColor(239, 65, 53);
	iFilledRectangle(x, y, length, height);

	iSetColor(255, 255, 255);
	iFilledRectangle(x, y, 0.25*length, height);

	for(int i = 0; i < 5; i++)
	{
		double xa[] = {xtri, xtri+0.15*length, xtri};
		double ya[] = {ytri, ytri+height/10, ytri+height/5};
		int n = 3;

		iFilledPolygon(xa, ya, n);

		ytri += height/5;
	}

	iSetColor(255, 255, 255);
	iText(x+0.15*length, y-50, "The Flag of Bahrain", GLUT_BITMAP_TIMES_ROMAN_24);
}

void drawMORflag(double length)
{
	double x = 600;
	double y = 90;
	double height = (2*length)/3;

	double centerx = x+0.5*length;
	double centery = y+0.5*height;
	double rad = length/6;

	double pi = 3.141592654;
	double ax = centerx, ay = centery+rad;
	double bx = (centerx + rad*cos((pi/180)*18)), by = (centery + rad*sin((pi/180)*18));
	double cx = (centerx + rad*cos((pi/180)*54)), cy = (centery - rad*sin((pi/180)*54));
	double dx = (centerx - rad*cos((pi/180)*54)), dy = (centery - rad*sin((pi/180)*54));
	double ex = (centerx - rad*cos((pi/180)*18)), ey = (centery + rad*sin((pi/180)*18));

	iSetColor(193, 39, 45);
	iFilledRectangle(x, y, length, height);

	iSetColor(0, 98, 51);

	iLine(ax, ay, cx, cy);
	iLine(ax, ay, dx, dy);
	iLine(bx, by, dx, dy);
	iLine(bx, by, ex, ey);
	iLine(cx, cy, ex, ey);

	iSetColor(255, 255, 255);
	iText(x+0.15*length, y-50, "The Flag of Morocco", GLUT_BITMAP_TIMES_ROMAN_24);
}

void iDraw()
{
	iClear();

	drawBGDflag(300);
	drawSWEflag(300);
	drawBAHflag(300);
	drawMORflag(300);
}

void iMouseMove(int mx, int my)
{
	
}

void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}

void iPassiveMouseMove(int mx,int my)
{
	mposx = mx;
	mposy = my;

	if(mx== 2)
	{

	}
	else if(my== 2)
	{

	}
}

void iKeyboard(unsigned char key)
{
	if(key == 'q')
	{
		
	}
}

void iSpecialKeyboard(unsigned char key)
{
	if(key == GLUT_KEY_END)
	{
		exit(0);
	}
}

int main()
{
	iInitialize(1280, 720, "Flag");

	return 0;
}
