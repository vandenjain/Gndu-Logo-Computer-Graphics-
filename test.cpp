#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<graphics.h>
class D_2
{
	private:
	double Points[MAXSIZE][MAXSIZE];
	void Mult(double [MAXSIZE][MAXSIZE]);
	void MultTwoMat(double [MAXSIZE][MAXSIZE],double [MAXSIZE][MAXSIZE]);
	void Print();
	int x,y;
	public:
	D_2();

	void Display(double[MAXSIZE][MAXSIZE]);
	void Scale_Fixed();
	void Scale_Dir();
};

void main(){

    int gd=0,gm,;

    initgraph(&gd,&gm,"");

    //circle(200,200,120);
    //circle(200,200,116);


    //ellipse(200,200,-45,225,120,120);
    //ellipse(200,200,-45,225,116,116);

    //ellipse(200,200,-45,225,80,80);
    //ellipse(200,200,-45,225,76,76);

    //line(150,180,140,450);

arc(220,240,-67,250,150);
arc(220,240,-65,250,145);
arc(220,240,-57,240,110);
arc(220,240,-57,240,105);

line(170,220,165,380);
line(175,220,170,380);
line(270,220,275,380);
line(275,220,280,380);
arc(147,373,-115,-20,20);
arc(147,373,-100,-20,25);
arc(298,373,-160,-70,20);
arc(298,373,-160,-85,25);
line(139,393,139,420);//|
line(144,398,144,415);// |
line(299,398,299,415);// |
line(304,393,304,420);//|
ellipse(170,408,-150,-30,30,15);
ellipse(170,409,-155,-25,35,20);
ellipse(275,408,-150,-30,30,15);
ellipse(275,409,-155,-25,35,20);
ellipse(223,423,20,160,30,15);
ellipse(223,430,15,160,30,15);

//inner circle
arc(190,220,90,180,20);
arc(195,220,90,180,20);

arc(250,220,0,90,20);
arc(255,220,0,90,20);

ellipse(220,220,14,166,35,83);
ellipse(220,220,14,166,30,78);

//candle base part(book)

arc(220,300,225,-45,50);
arc(220,320,225,-45,50);
arc(220,324,225,-45,50);
arc(220,328,225,-45,50);

line(183,335,183,363);
line(256,335,256,363);

//candle stick part
line(215,300,210,347);
line(224,300,229,347);
ellipse(220,295,-75,255,10,5);
line(217,283,217,290);
line(222,283,222,290);
ellipse(220,276,-75,255,15,8);
line(214,260,214,268);
line(225,260,225,268);
line(214,260,205,260);
line(225,260,234,260);
line(205,260,220,245);
line(234,260,220,245);
arc(220,245,180,225,20);
arc(220,245,-45,0,20);
arc(200,214,-85,-44,30);
arc(244,216,222,263,30);
ellipse(220,214,90,270,10,20);
ellipse(220,214,-90,90,10,20);
putpixel(220,194,WHITE);
putpixel(220,194,WHITE);
putpixel(220,193,WHITE);
putpixel(220,192,WHITE);
putpixel(220,191,WHITE);
putpixel(221,194,WHITE);
putpixel(221,193,WHITE);
putpixel(221,192,WHITE);
putpixel(219,191,WHITE);
putpixel(219,193,WHITE);
putpixel(219,192,WHITE);
putpixel(218,193,WHITE);
putpixel(218,192,WHITE);
putpixel(220,191,WHITE);




    void D_2::Scale_Fixed()
{
	double sx,sy;
	double xr,yr;
	double TransMat[MAXSIZE][MAXSIZE];
	double ScaleMat[MAXSIZE][MAXSIZE];
	double InvTransMat[MAXSIZE][MAXSIZE];

	closegraph();
	cout<<"Enter The Scaling Factor Along X-Axis: ";
	cin>>sx;
	cout<<"Enter The Scaling Factor Along Y-Axis: ";
	cin>>sy;
	cout<<"Enter Point Of Scaling:
X: ";
	cin>>xr;
	cout<<"
Y: ";
	cin>>yr;
	initialize();

	//Transformation Matrix
	for(int i=0;i<MAXSIZE;i++)
	{
		for(int j=0;j<MAXSIZE;j++)
		{
			if(i == j)
			{
					TransMat[i][j] = 1;
					InvTransMat[i][j] = 1;
					ScaleMat[i][j] = 1;
			}
			else
			{
					TransMat[i][j] = 0;
					InvTransMat[i][j] = 0;
					ScaleMat[i][j] = 0;
			}
		}
	 }

			TransMat[0][2] = -xr;
			TransMat[1][2] = -yr;

			InvTransMat[0][2] = xr;
			InvTransMat[1][2] = yr;

			ScaleMat[0][0] = sx;
			ScaleMat[1][1] = sy;

	 Draw(GREEN);
	 Print();
	 MultTwoMat(InvTransMat,ScaleMat);
	 MultTwoMat(ScaleMat,TransMat);
	 Mult(TransMat);
	 Draw(MAGENTA);
}








    getch();
    closegraph();
}


