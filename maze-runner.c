#include<conio.h>
#include<stdio.h>
#include<graphics.h>
void maze(int,int);
void main()
{
	int gd=DETECT,gm,x,y;char arr[50];
	char ch=0;int g=0;
	initgraph(&gd,&gm,"C:\TURBOC3\BIN");

	setcolor(13);
	settextstyle(4,0,7);
	outtextxy(125,100,"TiNgE WaLlS");
	settextstyle(0,0,2);
	setcolor(15);
	outtextxy(170,200,"space to enter the game");
	ch=getch();
	settextstyle(0,0,2);
	cleardevice();
	if(ch==' ')
	maze(x,y);

	x=80,y=40;

	ch=0;
	while(ch!=27)
	{
		ch=getch();
		if((x==80&&y==40)&&(ch!=80))
		{
			outtextxy(350,150,"invalid input!!!!");
			continue;
		}
		switch(ch)
		{
			case 72:    //up
				g++;
				if(getpixel(x,y-10)==3)
				{       setcolor(12);
					outtextxy(350,150,"invalid input!!!");

					continue;
				}
				else
				{
					if(getpixel(x,y-10)==1)
					{
						ch=getch();
						if(ch==32)
						{
							y-=20;
							g-=3;
						}
					}
					else
					{
						y-=10;

					}

				}
				break;
			case 80:    //down
				g++;
				if(getpixel(x,y+10)==3)
				{
					setcolor(12);
					outtextxy(350,150,"invalid input!!!!");

					continue;
				}


				else
				{	if(getpixel(x,y+10)==1)
					{
						ch=getch();
						if(ch==32)
						{
							y+=20;
							g-=3;
						}
					}
					else
					{
						y+=10;

					}

				}
				break;
			case 77:  //right
				g++;
				if(getpixel(x+10,y)==3)
				{
					setcolor(12);
					outtextxy(350,150,"invalid input!!!");
					continue;
				}

				else
				{
					if(getpixel(x+10,y)==1)
					{
						ch=getch();
						if(ch==32)
						{
							x+=20;
							g-=3;
						 }
					}
					else
					{
						x+=10;

					}

				}
				break;
			case 75:   //left
				g++;
				if(getpixel(x-10,y)==3)
				{
					setcolor(12);
					outtextxy(350,150,"invalid input!!!");
					continue;
				}

				else
				{	if(getpixel(x-10,y)==1)
				       {
						ch=getch();
						if(ch==32)
						{
							x-=20;
							g-=3;
						}
				       }
				       else
				       {
						x-=10;

				       }

				}
				break;


		}

		cleardevice();

		maze(x,y);
		if(x==310)
		{
			outtextxy(400,200,"you won!!");
			break;
		}
		outtextxy(520,200,"MOVES");

		sprintf(arr,"%d",g);
		setcolor(5);

		outtextxy(525,215,arr);

	   }

	cleardevice();
	setcolor(4);
	settextstyle(4,0,4);
	if(x==310)
	{
		if(g<=98)
			outtextxy(370,70,"Your Score: * * *");
		else if(g>98&&g<110)
			outtextxy(370,70,"Your Score: * *");
		else if(g>110&&g<150)
			outtextxy(370,70,"Your Score: *");
		else
			outtextxy(370,70,"Your Score: ---");


		settextstyle(4,0,7);
		setcolor(9);
		outtextxy(170,150,"Good play");
	}
		settextstyle(0,0,2);setcolor(8);
		outtextxy(170,370,"press any key to exit");
		getch();

		closegraph();
}


		   void maze(int x,int y)
			{
			setcolor(3);
			line(50,50,70,50);
			line(90,50,290,50);
			line(290,50,290,290);
			line(290,310,290,370);
			line(50,370,290,370);
			line(50,50,50,370);
			line(70,70,70,90);
			line(50,90,70,90);
			line(90,70,90,90);
			line(90,90,270,90);
			line(50,110,250,110);
			line(270,90,270,230);
			line(270,230,150,230);
			line(150,230,150,150);
			line(150,150,90,150);
			line(250,110,250,150);
			line(250,150,200,150);
			line(200,130,70,130);
			line(200,130,70,130);
			line(70,130,70,310);
			line(70,310,150,310);
			line(150,310,150,350);
			line(150,350,250,350);
			line(250,350,250,310);
			line(250,310,170,310);
			line(170,310,170,330);
			line(170,330,230,330);
			line(90,150,90,290);
			line(90,290,290,290);
			line(170,130,170,170);
			line(270,290,270,350);
			rectangle(170,170,250,210);
			line(70,50,70,30);
			line(90,50,90,30);
			line(290,290,310,290);
			line(290,310,310,310);
			setcolor(YELLOW);

			outtextxy(65,0,"entry");
			outtextxy(315,297,"exit");
			//***
			circle(80,90,3);
			setfillstyle(1,1);
			floodfill(80,90,14);
			//***
			circle(260,170,3);
			setfillstyle(1,1);
			floodfill(260,170,14);
			//***
			circle(250,220,3);
			setfillstyle(1,1);
			floodfill(250,220,14);
			//***
			circle(280,100,3);
			setfillstyle(1,1);
			floodfill(280,100,14);
			//***
			circle(190,150,3);
			setfillstyle(1,1);
			floodfill(190,150,14);
			//***
			circle(80,320,3);
			setfillstyle(1,1);
			floodfill(80,320,14);
			//***
			circle(150,300,3);
			setfillstyle(1,1);
			floodfill(150,300,14);
			//***
			circle(180,220,3);
			setfillstyle(1,1);
			floodfill(180,220,14);
			//***
			circle(270,360,3);
			setfillstyle(1,1);
			floodfill(270,360,14);
			//***


			circle(x,y,3);
			setfillstyle(1,2);
			floodfill(x,y,14);

			}
