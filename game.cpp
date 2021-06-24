
#ifndef DODGE_CPP_
#define DODGE_CPP_
#include "util.h"
#include <iostream>
#include<string>
#include<cmath> // for basic math functions such as cos, sin, sqrt
using namespace std;

	float x_input = 450; 
	float y_input = 50;
	float x_input2= 450;
	float y_input2= 150;
	int a = 350; 
	int b = 50;
	int space_count=0;
	int lives = 3;
	float food_xcoordinate[1000]={};
	float food_ycoordinate[1000]={};
	int TotalScore=0;  //To calculate Score
	int check[1000][1000]={0}; //Check used to calculate food collected
	int o_speed=2.5; //Speed of opponent
	int p_speed=5; //Speed of Player
	int check1=0; //Used for Menu Selection and calling different functions
	int level=1; //Used to detect levels
	int totalfoodeaten=0; //Used to upgrade level after all food has been eaten




void SetCanvasSize(int width, int height) {
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}


/*
 * Main Canvas drawing function.
 * */
//Board *b;






///////////////////////////////////////////////////START MENU//////////////////////////////
	void StartMenu()
	{
		DrawString( 350, 950, "DODGE EM", colors[GREEN]);
		DrawString( 50, 800, "1) Play New Game", colors[RED]);
		DrawString( 50, 700, "2) High Score", colors[RED]);
		DrawString( 50, 600, "3) Help", colors[RED]);
		DrawString( 50, 500, "4) Exit", colors[RED]);
		lives=3;
		glutSwapBuffers();
	}
	void Help()
	{
		DrawString( 50, 800, "You can move with arrow keys", colors[RED]);
		DrawString( 50, 700, "The game consists of four levels", colors[RED]);
		DrawString( 50, 600, "Difficulity level increases with each level", colors[RED]);
		DrawString( 50, 500, "Press Space Bar to increase speed", colors[RED]);
		DrawString( 50, 400, "Now press 0 to go to main menu", colors[GREEN]);
		glutSwapBuffers();
	}
	void Pause()
	{
		DrawString( 350, 950, "Pause Menu", colors[GREEN]);
		DrawString( 50, 500, "Press 1 to Continue Game", colors[RED]);
		DrawString( 50, 400, "Press 0 to go to Start Menu", colors[GREEN]);
		glutSwapBuffers();
	}
	void Exit()
	{
		exit(1);
	}
	
	void GameOver()
	{
		DrawString( 50, 800, "Game Over", colors[RED]);
		DrawString( 50, 500, "Press 0 to go to main menu", colors[GREEN]);
		glutSwapBuffers();	
	}
	
	void Congratulations()
	{
		DrawString( 50, 800, "Congratulations you have completed the game", colors[RED]);
		DrawString( 50, 500, "Press 0 to go to main menu", colors[GREEN]);
		glutSwapBuffers();	
	}
	void MovementCar1()  //Compiled level1 and level2 code to be used for level4's extra cars
	{
		if((b>=50 && b<=750) && ( a>=50 && a<=750)) 
	{		
		if((x_input>=150 || x_input<=650) && (y_input>=150 || y_input<=650))
		{
			if( x_input >= 350 && x_input<= 450 ) 
			{
				if(y_input==650)
				{
					y_input+=100;
				}
				if(y_input==150)
				{
					y_input-=100;
				}
			}
		}
		if((x_input>=350 || x_input<=450) && (y_input>=350 || y_input<=450))
		{
			if( x_input >= 350 && x_input<= 450 ) 
			{
				if(y_input==450)
				{
					y_input+=100;
				}
				if(y_input==350)
				{
					y_input-=100;
				}
			}
		}
	}	





	if((b>=150 && b<=650) && ( a>=150 && a<=650)) 
	{		
		if((x_input>=50 || x_input<=750) && (y_input>=50 || y_input<=750))
		{
			if( x_input >= 350 && x_input<= 450 ) 
			{
				if(y_input==750)
				{
					y_input-=100;
				}
				if(y_input==50)
				{
					y_input+=100;
				}
			}
		}
		
		 if((x_input>=250 || x_input<=550) && (y_input>=250 || y_input<=550))
		{
			if( x_input >= 350 && x_input<= 450 ) 
			{
				if(y_input==550)
				{
					y_input+=100;
				}
				if(y_input==250)
				{
					y_input-=100;
				}
			}
		}
	}



	if((a>=250 && a<=550) && (b>=250 && b<=550)) 
	{
		if ((x_input>=150 || x_input <=650) && (y_input>=150 || y_input<=650))
		{
			if(x_input>=350 && x_input <= 450)
			{
				if(y_input==650)
				{
					y_input-=100;
				}
				if(y_input==150)
				{
					y_input+=100;
				}
			}
		}	
		 if ((x_input>=350 || x_input <=450) && (y_input>=350 || y_input<=450))
		{
			if(x_input>=350 && x_input <= 450)
			{
				if(y_input==450)
				{
					y_input+=100;
				}
				if(y_input==350)
				{
					y_input-=100;
				}
			}
		}
	}	
	

	if((a>=350 && a<=450) && ( b>=350 && b<=450)) 
	{	
		if ((x_input>=250 || x_input <=550) && (y_input>=250 || y_input<=550))
		{
			if(x_input>=350 && x_input <= 450)
			{
				if(y_input==550)
				{
					y_input-=100;
				}
				if(y_input==250)
				{
					y_input+=100;
				}
			}
		}
		if ((x_input>=150 || x_input <=650) && (y_input>=150 || y_input<=650))
		{
			if(x_input>=350 && x_input <= 450)
			{
				if(y_input==150)
				{
					y_input+=100;
				}
				if(y_input==650)
				{
					y_input-=100;
				}
			}	
		}
		if ((x_input>=50 || x_input <=750) && (y_input>=50 || y_input<=750))
		{
			if(x_input>=350 && x_input <= 450)
			{
				if(y_input==50)
				{
					y_input+=100;
				}
				if(y_input==750)
				{
					y_input-=100;
				}
			}	
		}
	}
	





		if((b>=50 && b<=750) && ( a>=50 && a<=750)) 
	{		
		if((x_input>=150 || x_input<=650) && (y_input>=150 || y_input<=650))
		{
			if( x_input >= 350 && x_input<= 450 ) 
			{
				if(y_input==650)
				{
					y_input+=100;
				}
				if(y_input==150)
				{
					y_input-=100;
				}
			}
		}
		if((x_input>=350 || x_input<=450) && (y_input>=350 || y_input<=450))
		{
			if( x_input >= 350 && x_input<= 450 ) 
			{
				if(y_input==450)
				{
					y_input+=100;
				}
				if(y_input==350)
				{
					y_input-=100;
				}
			}
		}
	}	





	if((b>=150 && b<=650) && ( a>=150 && a<=650)) 
	{		
		if((x_input>=50 || x_input<=750) && (y_input>=50 || y_input<=750))
		{
			if( x_input >= 350 && x_input<= 450 ) 
			{
				if(y_input==750)
				{
					y_input-=100;
				}
				if(y_input==50)
				{
					y_input+=100;
				}
			}
		}
		
		 if((x_input>=250 || x_input<=550) && (y_input>=250 || y_input<=550))
		{
			if( x_input >= 350 && x_input<= 450 ) 
			{
				if(y_input==550)
				{
					y_input+=100;
				}
				if(y_input==250)
				{
					y_input-=100;
				}
			}
		}
	}



	if((a>=250 && a<=550) && (b>=250 && b<=550)) 
	{
		if ((x_input>=150 || x_input <=650) && (y_input>=150 || y_input<=650))
		{
			if(x_input>=350 && x_input <= 450)
			{
				if(y_input==650)
				{
					y_input-=100;
				}
				if(y_input==150)
				{
					y_input+=100;
				}
			}
		}	
		 if ((x_input>=350 || x_input <=450) && (y_input>=350 || y_input<=450))
		{
			if(x_input>=350 && x_input <= 450)
			{
				if(y_input==450)
				{
					y_input+=100;
				}
				if(y_input==350)
				{
					y_input-=100;
				}
			}
		}
	}	
	

	if((a>=350 && a<=450) && ( b>=350 && b<=450)) 
	{	
		if ((x_input>=250 || x_input <=550) && (y_input>=250 || y_input<=550))
		{
			if(x_input>=350 && x_input <= 450)
			{
				if(y_input==550)
				{
					y_input-=100;
				}
				if(y_input==250)
				{
					y_input+=100;
				}
			}
		}
		if ((x_input>=150 || x_input <=650) && (y_input>=150 || y_input<=650))
		{
			if(x_input>=350 && x_input <= 450)
			{
				if(y_input==150)
				{
					y_input+=100;
				}
				if(y_input==650)
				{
					y_input-=100;
				}
			}	
		}
		if ((x_input>=50 || x_input <=750) && (y_input>=50 || y_input<=750))
		{
			if(x_input>=350 && x_input <= 450)
			{
				if(y_input==50)
				{
					y_input+=100;
				}
				if(y_input==750)
				{
					y_input-=100;
				}
			}	
		}
	}
	














	if((b>=50 && b<=750) && ( a>=50 && a<=750)) 
	{		
		if((x_input>=150 || x_input<=650) && (y_input>=150 || y_input<=650))
		{
			if( y_input >= 350 && y_input<= 450 ) 
			{
				if(x_input==650)
				{
					x_input+=100;
				}
				if(x_input==150)
				{
					x_input-=100;
				}
			}
		}
		if((x_input>=350 || x_input<=450) && (y_input>=350 || y_input<=450))
		{
			if( y_input >= 350 && y_input<= 450 ) 
			{
				if(x_input==450)
				{
					x_input+=100;
				}
				if(x_input==350)
				{
					x_input-=100;
				}
			}
		}
	}	





	if((b>=150 && b<=650) && ( a>=150 && a<=650)) 
	{		
		if((x_input>=50 || x_input<=750) && (y_input>=50 || y_input<=750))
		{
			if( y_input >= 350 && y_input<= 450 ) 
			{
				if(x_input==750)
				{
					x_input-=100;
				}
				if(x_input==50)
				{
					x_input+=100;
				}
			}
		}
		
		 if((x_input>=250 || x_input<=550) && (y_input>=250 || y_input<=550))
		{
			if( y_input >= 350 && y_input<= 450 ) 
			{
				if(x_input==550)
				{
					x_input+=100;
				}
				if(x_input==250)
				{
					x_input-=100;
				}
			}
		}
	}



	if((a>=250 && a<=550) && (b>=250 && b<=550)) 
	{
		if ((x_input>=150 || x_input <=650) && (y_input>=150 || y_input<=650))
		{
			if(y_input>=350 && y_input <= 450)
			{
				if(x_input==650)
				{
					x_input-=100;
				}
				if(x_input==150)
				{
					x_input+=100;
				}
			}
		}	
		 if ((x_input>=350 || x_input <=450) && (y_input>=350 || y_input<=450))
		{
			if(y_input>=350 && y_input <= 450)
			{
				if(x_input==450)
				{
					x_input+=100;
				}
				if(x_input==350)
				{
					x_input-=100;
				}
			}
		}
	}	
	

	if((a>=350 && a<=450) && ( b>=350 && b<=450)) 
	{	
		if ((x_input>=250 || x_input <=550) && (y_input>=250 || y_input<=550))
		{
			if(y_input>=350 && y_input <= 450)
			{
				if(x_input==550)
				{
					x_input-=100;
				}
				if(x_input==250)
				{
					x_input+=100;
				}
			}
		}
		if ((x_input>=150 || x_input <=650) && (y_input>=150 || y_input<=650))
		{
			if(y_input>=350 && y_input <= 450)
			{
				if(x_input==150)
				{
					x_input+=100;
				}
				if(x_input==650)
				{
					x_input-=100;
				}
			}	
		}
		if ((x_input>=50 || x_input <=750) && (y_input>=50 || y_input<=750))
		{
			if(y_input>=350 && y_input <= 450)
			{
				if(x_input==50)
				{
					x_input+=100;
				}
				if(x_input==750)
				{
					x_input-=100;
				}
			}	
		}
	}
}

	
	void GameDisplay()/**/{
	if(check1==11)
	{
		Congratulations();
	}
	if(check1==10)
	{
		GameOver();
	}
	if(check1==4)
	{
		Pause();
	}	
	if(check1==0)
	{
		for(int i=0; i<1000; i++)
			{
				for(int j=0; j<1000; j++)
				{
					check[i][j]=0;
				}
			}
		TotalScore=0;
		a=150; b=50; x_input=450; y_input=50;
		a=150; b=50; x_input2=450; y_input2=150;
		StartMenu();
	}
	if(check1==3)
	{
		Help();
	}	

	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.

	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
			0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors

	


	if(check1==1)
	{
	
	if(level>4)
	{
		check1=11;
	}
	
	if(level>=3)
	{
		o_speed=5;
	}


	//Code to eat food and Calculate Score
	for (int i= 50; i<=750; i+=100)
	{
			for(int j=50; j<=750; j+=100)
			{
				if (((i<=a +20) && (i >= a-20)) && ((j <= b+20) && (j >= b-20)))
				{
					if(check[i][j] == 0)
					{
						check[i][j]=1;
						TotalScore+=10;
						totalfoodeaten+=1;
					}
					
				}
					
				if(check[i][j]==0)
				{
					DrawSquare(i,j,10,colors[RED]);
				}		
			
			}
	}
	












         
	

	
	// Drawing opponent car
 
	float width = 10; 
	float height = 9;
	float* color = colors[PURPLE]; 
	float radius = 5.0;
	DrawRoundRect(x_input,y_input,width,height,color,radius); // bottom left tyre
	DrawRoundRect(x_input+width*3,y_input,width,height,color,radius); // bottom right tyre
	DrawRoundRect(x_input+width*3,y_input+height*4,width,height,color,radius); // top right tyre
	DrawRoundRect(x_input,y_input+height*4,width,height,color,radius); // top left tyre
	DrawRoundRect(x_input, y_input+height*2, width, height, color, radius/2); // body left rect
	DrawRoundRect(x_input+width, y_input+height, width*2, height*3, color, radius/2); // body center rect
	DrawRoundRect(x_input+width*3, y_input+height*2, width, height, color, radius/2); // body right rect

	// user car
 
	width = 10; 
	height = 9;
	color = colors[RED]; 
	radius = 5.0;
	DrawRoundRect(a,b,width,height,color,radius); // bottom left tyre
	DrawRoundRect(a+width*3,b,width,height,color,radius); // bottom right tyre
	DrawRoundRect(a+width*3,b+height*4,width,height,color,radius); // top right tyre
	DrawRoundRect(a,b+height*4,width,height,color,radius); // top left tyre
	DrawRoundRect(a, b+height*2, width, height, color, radius/2); // body left rect
	DrawRoundRect(a+width, b+height, width*2, height*3, color, radius/2); // body center rect
	DrawRoundRect(a+width*3, b+height*2, width, height, color, radius/2); // body right rect

	 


	// Drawing Arena
	int gap_turn = 100;
	int sx = 20;
	int sy = 10;
	int swidth = 800/2 - gap_turn/2; // half width
	int sheight = 5;
	float *scolor = colors[BLUE];
	DrawRectangle(sx, sy, swidth, sheight, scolor); // bottom left
	DrawRectangle(sx + swidth + gap_turn, sy, swidth, sheight, scolor); // bottom right
	DrawRectangle(sx+swidth*2+gap_turn, sy+sheight, sheight*2, swidth, scolor); // right down
	DrawRectangle(sx+swidth*2+gap_turn, sy+sheight+swidth+gap_turn, sheight*2, swidth, scolor); // right up
	DrawRectangle(sx + swidth + gap_turn, sy+810, swidth, sheight, scolor); // top left
	DrawRectangle(sx, sy+810, swidth, sheight, scolor); // top right
	DrawRectangle(sx-sheight*2, sy+sheight+swidth+gap_turn, sheight*2, swidth, scolor); // left up
	DrawRectangle(sx-sheight*2, sy+sheight, sheight*2, swidth, scolor); // left down
      
	int sx1 = 120;
	int sy1 = 110;
	int swidth1 = 600/2 - gap_turn/2; // half width
	int sheight1 = 5;
	scolor = colors[BLUE];
	DrawRectangle(sx1, sy1, swidth1, sheight1, scolor); // bottom left
	DrawRectangle(sx1 + swidth1 + gap_turn, sy1, swidth1, sheight1, scolor); // bottom right
	DrawRectangle(sx1+swidth1*2+gap_turn, sy1+sheight1, sheight1*2, swidth1, scolor); // right down
	DrawRectangle(sx1+swidth1*2+gap_turn, sy1+sheight1+swidth1+gap_turn, sheight1*2, swidth1, scolor); // right up
	DrawRectangle(sx1 + swidth1 + gap_turn, sy1+610, swidth1, sheight1, scolor); // top left
	DrawRectangle(sx1, sy1+610, swidth1, sheight1, scolor); // top right
	DrawRectangle(sx1-sheight1*2, sy1+sheight1+swidth1+gap_turn, sheight1*2, swidth1, scolor); // left up
	DrawRectangle(sx1-sheight1*2, sy1+sheight1, sheight1*2, swidth1, scolor); // left down
      
	sx = 220;
	sy = 210;
	swidth = 400/2 - gap_turn/2; // half width
	sheight = 5;
	scolor = colors[BLUE];
	DrawRectangle(sx, sy, swidth, sheight, scolor); // bottom left
	DrawRectangle(sx + swidth + gap_turn, sy, swidth, sheight, scolor); // bottom right
	DrawRectangle(sx+swidth*2+gap_turn, sy+sheight, sheight*2, swidth, scolor); // right down
	DrawRectangle(sx+swidth*2+gap_turn, sy+sheight+swidth+gap_turn, sheight*2, swidth, scolor); // right up
	DrawRectangle(sx + swidth + gap_turn, sy+410, swidth, sheight, scolor); // top left
	DrawRectangle(sx, sy+410, swidth, sheight, scolor); // top right
	DrawRectangle(sx-sheight*2, sy+sheight+swidth+gap_turn, sheight*2, swidth, scolor); // left up
	DrawRectangle(sx-sheight*2, sy+sheight, sheight*2, swidth, scolor); // left down
      
	sx = 320;
	sy = 310;
	swidth = 200/2 - gap_turn/2; // half width
	sheight = 5;
	scolor = colors[BLUE];
	DrawRectangle(sx, sy, swidth, sheight, scolor); // bottom left
	DrawRectangle(sx + swidth + gap_turn, sy, swidth, sheight, scolor); // bottom right
	DrawRectangle(sx+swidth*2+gap_turn, sy+sheight, sheight*2, swidth, scolor); // right down
	DrawRectangle(sx+swidth*2+gap_turn, sy+sheight+swidth+gap_turn, sheight*2, swidth, scolor); // right up
	DrawRectangle(sx + swidth + gap_turn, sy+210, swidth, sheight, scolor); // top left
	DrawRectangle(sx, sy+210, swidth, sheight, scolor); // top right
	DrawRectangle(sx-sheight*2, sy+sheight+swidth+gap_turn, sheight*2, swidth, scolor); // left up
	DrawRectangle(sx-sheight*2, sy+sheight, sheight*2, swidth, scolor); // left down
      
	DrawSquare( 395 , 390 ,50,colors[BROWN]); // For centre





	// Code to move cars	
	if(a==750 && b>50)
	{
		b-=p_speed;
	}
	else if (b==50 && a>50)
	{
		a-=p_speed;
	}
	else if (a==50 && b< 750)
	{
		b+=p_speed;
	}
	else if ( b==750 && a<750)
	{
		a+=p_speed;
	}
	else if (a==650 && b > 150)
	{
		b-=p_speed;
	}
	else if (b==150 && a>150)
	{
		a-=p_speed;
	}
	else if (a==150 && b<650)
	{
		b+=p_speed;
	}
	else if ( b==650 && a<650)
	{
		a+=p_speed;
	}
	else if (a==550 && b > 250)
	{
		b-=p_speed;
	}
	else if (b==250 && a>250)
	{
		a-=p_speed;
	}
	else if (a==250 && b<550)
	{
		b+=p_speed;
	}
	else if ( b==550 && a<550)
	{
		a+=p_speed;
	}
	else if (a==450 && b > 350)
	{
		b-=p_speed;
	}
	else if (b==350 && a>350)
	{
		a-=p_speed;
	}
	else if (a==350 && b<450)
	{
		b+=p_speed;
	}
	else if ( b==450 && a<450)
	{
		a+=p_speed;
	}



/////////////////////Loop For Opponent Car////////////////////////////////////



		
	
		
		if(x_input==750 && y_input<750)
		{
			y_input+=o_speed;
		}
		else if (y_input==750 && x_input>50)
		{
			x_input-=o_speed;
		}
		else if (x_input==50 && y_input> 50)
		{
			y_input-=o_speed;
		}
		else if ( y_input==50 && x_input<750)
		{
			x_input+=o_speed;
		}



		else if(x_input==650 && y_input<650)
		{
			y_input+=o_speed;
		}
		else if (y_input==650 && x_input>150)
		{
			x_input-=o_speed;
		}
		else if (x_input==150 && y_input> 150)
		{
			y_input-=o_speed;
		}
		else if ( y_input==150 && x_input<650)
		{
			x_input+=o_speed;
		}
		




		else if(x_input==550 && y_input<550)
		{
			y_input+=o_speed;
		}
		else if (y_input==550 && x_input>250)
		{
			x_input-=o_speed;
		}
		else if (x_input==250 && y_input> 250)
		{
			y_input-=o_speed;
		}
		else if ( y_input==250 && x_input<550)
		{
			x_input+=o_speed;
		}


		else if(x_input==350 && y_input>350)
		{
			y_input-=o_speed;
		}
		else if (y_input==350 && x_input<450)
		{
			x_input+=o_speed;
		}
		else if (x_input==450 && y_input< 450)
		{
			y_input+=o_speed;
		}
		else if ( y_input==450 && x_input>350)
		{
			x_input-=o_speed;
		}



	//////////////////////////////////////////////////CODE to Follow Car////////////////////////////////////////////////////
	

	
if(level==1)
{


	if((b>=50 && b<=750) && ( a>=50 && a<=750)) 
	{		
		if((x_input>=150 || x_input<=650) && (y_input>=150 || y_input<=650))
		{
			if( x_input >= 350 && x_input<= 450 ) 
			{
				if(y_input==650)
				{
					y_input+=100;
				}
				if(y_input==150)
				{
					y_input-=100;
				}
			}
		}
		if((x_input>=350 || x_input<=450) && (y_input>=350 || y_input<=450))
		{
			if( x_input >= 350 && x_input<= 450 ) 
			{
				if(y_input==450)
				{
					y_input+=100;
				}
				if(y_input==350)
				{
					y_input-=100;
				}
			}
		}
	}	





	if((b>=150 && b<=650) && ( a>=150 && a<=650)) 
	{		
		if((x_input>=50 || x_input<=750) && (y_input>=50 || y_input<=750))
		{
			if( x_input >= 350 && x_input<= 450 ) 
			{
				if(y_input==750)
				{
					y_input-=100;
				}
				if(y_input==50)
				{
					y_input+=100;
				}
			}
		}
		
		 if((x_input>=250 || x_input<=550) && (y_input>=250 || y_input<=550))
		{
			if( x_input >= 350 && x_input<= 450 ) 
			{
				if(y_input==550)
				{
					y_input+=100;
				}
				if(y_input==250)
				{
					y_input-=100;
				}
			}
		}
	}



	if((a>=250 && a<=550) && (b>=250 && b<=550)) 
	{
		if ((x_input>=150 || x_input <=650) && (y_input>=150 || y_input<=650))
		{
			if(x_input>=350 && x_input <= 450)
			{
				if(y_input==650)
				{
					y_input-=100;
				}
				if(y_input==150)
				{
					y_input+=100;
				}
			}
		}	
		 if ((x_input>=350 || x_input <=450) && (y_input>=350 || y_input<=450))
		{
			if(x_input>=350 && x_input <= 450)
			{
				if(y_input==450)
				{
					y_input+=100;
				}
				if(y_input==350)
				{
					y_input-=100;
				}
			}
		}
	}	
	

	if((a>=350 && a<=450) && ( b>=350 && b<=450)) 
	{	
		if ((x_input>=250 || x_input <=550) && (y_input>=250 || y_input<=550))
		{
			if(x_input>=350 && x_input <= 450)
			{
				if(y_input==550)
				{
					y_input-=100;
				}
				if(y_input==250)
				{
					y_input+=100;
				}
			}
		}
		if ((x_input>=150 || x_input <=650) && (y_input>=150 || y_input<=650))
		{
			if(x_input>=350 && x_input <= 450)
			{
				if(y_input==150)
				{
					y_input+=100;
				}
				if(y_input==650)
				{
					y_input-=100;
				}
			}	
		}
		if ((x_input>=50 || x_input <=750) && (y_input>=50 || y_input<=750))
		{
			if(x_input>=350 && x_input <= 450)
			{
				if(y_input==50)
				{
					y_input+=100;
				}
				if(y_input==750)
				{
					y_input-=100;
				}
			}	
		}
	}
	
}

if(level==2)
{

		if((b>=50 && b<=750) && ( a>=50 && a<=750)) 
	{		
		if((x_input>=150 || x_input<=650) && (y_input>=150 || y_input<=650))
		{
			if( x_input >= 350 && x_input<= 450 ) 
			{
				if(y_input==650)
				{
					y_input+=100;
				}
				if(y_input==150)
				{
					y_input-=100;
				}
			}
		}
		if((x_input>=350 || x_input<=450) && (y_input>=350 || y_input<=450))
		{
			if( x_input >= 350 && x_input<= 450 ) 
			{
				if(y_input==450)
				{
					y_input+=100;
				}
				if(y_input==350)
				{
					y_input-=100;
				}
			}
		}
	}	





	if((b>=150 && b<=650) && ( a>=150 && a<=650)) 
	{		
		if((x_input>=50 || x_input<=750) && (y_input>=50 || y_input<=750))
		{
			if( x_input >= 350 && x_input<= 450 ) 
			{
				if(y_input==750)
				{
					y_input-=100;
				}
				if(y_input==50)
				{
					y_input+=100;
				}
			}
		}
		
		 if((x_input>=250 || x_input<=550) && (y_input>=250 || y_input<=550))
		{
			if( x_input >= 350 && x_input<= 450 ) 
			{
				if(y_input==550)
				{
					y_input+=100;
				}
				if(y_input==250)
				{
					y_input-=100;
				}
			}
		}
	}



	if((a>=250 && a<=550) && (b>=250 && b<=550)) 
	{
		if ((x_input>=150 || x_input <=650) && (y_input>=150 || y_input<=650))
		{
			if(x_input>=350 && x_input <= 450)
			{
				if(y_input==650)
				{
					y_input-=100;
				}
				if(y_input==150)
				{
					y_input+=100;
				}
			}
		}	
		 if ((x_input>=350 || x_input <=450) && (y_input>=350 || y_input<=450))
		{
			if(x_input>=350 && x_input <= 450)
			{
				if(y_input==450)
				{
					y_input+=100;
				}
				if(y_input==350)
				{
					y_input-=100;
				}
			}
		}
	}	
	

	if((a>=350 && a<=450) && ( b>=350 && b<=450)) 
	{	
		if ((x_input>=250 || x_input <=550) && (y_input>=250 || y_input<=550))
		{
			if(x_input>=350 && x_input <= 450)
			{
				if(y_input==550)
				{
					y_input-=100;
				}
				if(y_input==250)
				{
					y_input+=100;
				}
			}
		}
		if ((x_input>=150 || x_input <=650) && (y_input>=150 || y_input<=650))
		{
			if(x_input>=350 && x_input <= 450)
			{
				if(y_input==150)
				{
					y_input+=100;
				}
				if(y_input==650)
				{
					y_input-=100;
				}
			}	
		}
		if ((x_input>=50 || x_input <=750) && (y_input>=50 || y_input<=750))
		{
			if(x_input>=350 && x_input <= 450)
			{
				if(y_input==50)
				{
					y_input+=100;
				}
				if(y_input==750)
				{
					y_input-=100;
				}
			}	
		}
	}
	














	if((b>=50 && b<=750) && ( a>=50 && a<=750)) 
	{		
		if((x_input>=150 || x_input<=650) && (y_input>=150 || y_input<=650))
		{
			if( y_input >= 350 && y_input<= 450 ) 
			{
				if(x_input==650)
				{
					x_input+=100;
				}
				if(x_input==150)
				{
					x_input-=100;
				}
			}
		}
		if((x_input>=350 || x_input<=450) && (y_input>=350 || y_input<=450))
		{
			if( y_input >= 350 && y_input<= 450 ) 
			{
				if(x_input==450)
				{
					x_input+=100;
				}
				if(x_input==350)
				{
					x_input-=100;
				}
			}
		}
	}	





	if((b>=150 && b<=650) && ( a>=150 && a<=650)) 
	{		
		if((x_input>=50 || x_input<=750) && (y_input>=50 || y_input<=750))
		{
			if( y_input >= 350 && y_input<= 450 ) 
			{
				if(x_input==750)
				{
					x_input-=100;
				}
				if(x_input==50)
				{
					x_input+=100;
				}
			}
		}
		
		 if((x_input>=250 || x_input<=550) && (y_input>=250 || y_input<=550))
		{
			if( y_input >= 350 && y_input<= 450 ) 
			{
				if(x_input==550)
				{
					x_input+=100;
				}
				if(x_input==250)
				{
					x_input-=100;
				}
			}
		}
	}



	if((a>=250 && a<=550) && (b>=250 && b<=550)) 
	{
		if ((x_input>=150 || x_input <=650) && (y_input>=150 || y_input<=650))
		{
			if(y_input>=350 && y_input <= 450)
			{
				if(x_input==650)
				{
					x_input-=100;
				}
				if(x_input==150)
				{
					x_input+=100;
				}
			}
		}	
		 if ((x_input>=350 || x_input <=450) && (y_input>=350 || y_input<=450))
		{
			if(y_input>=350 && y_input <= 450)
			{
				if(x_input==450)
				{
					x_input+=100;
				}
				if(x_input==350)
				{
					x_input-=100;
				}
			}
		}
	}	
	

	if((a>=350 && a<=450) && ( b>=350 && b<=450)) 
	{	
		if ((x_input>=250 || x_input <=550) && (y_input>=250 || y_input<=550))
		{
			if(y_input>=350 && y_input <= 450)
			{
				if(x_input==550)
				{
					x_input-=100;
				}
				if(x_input==250)
				{
					x_input+=100;
				}
			}
		}
		if ((x_input>=150 || x_input <=650) && (y_input>=150 || y_input<=650))
		{
			if(y_input>=350 && y_input <= 450)
			{
				if(x_input==150)
				{
					x_input+=100;
				}
				if(x_input==650)
				{
					x_input-=100;
				}
			}	
		}
		if ((x_input>=50 || x_input <=750) && (y_input>=50 || y_input<=750))
		{
			if(y_input>=350 && y_input <= 450)
			{
				if(x_input==50)
				{
					x_input+=100;
				}
				if(x_input==750)
				{
					x_input-=100;
				}
			}	
		}
	}
	
}


if(level==4)
{
	////////////////////////////////////////////SECOND CAR CREATION///////////////////////////////////////////////////////////
	width = 10; 
	height = 9;
	color = colors[PURPLE]; 
	radius = 5.0;
	DrawRoundRect(x_input2,y_input2,width,height,color,radius); // bottom left tyre
	DrawRoundRect(x_input2+width*3,y_input2,width,height,color,radius); // bottom right tyre
	DrawRoundRect(x_input2+width*3,y_input2+height*4,width,height,color,radius); // top right tyre
	DrawRoundRect(x_input2,y_input2+height*4,width,height,color,radius); // top left tyre
	DrawRoundRect(x_input2, y_input2+height*2, width, height, color, radius/2); // body left rect
	DrawRoundRect(x_input2+width, y_input2+height, width*2, height*3, color, radius/2); // body center rect
	DrawRoundRect(x_input2+width*3, y_input2+height*2, width, height, color, radius/2); // body right rect



      ////////////////////////////////////////////SECOND CAR MOVEMENT///////////////////////////////////////


	if(x_input2==750 && y_input2<750)
		{
			y_input2+=o_speed;
		}
		else if (y_input2==750 && x_input2>50)
		{
			x_input2-=o_speed;
		}
		else if (x_input2==50 && y_input2> 50)
		{
			y_input2-=o_speed;
		}
		else if ( y_input2==50 && x_input2<750)
		{
			x_input2+=o_speed;
		}



		else if(x_input2==650 && y_input2<650)
		{
			y_input2+=o_speed;
		}
		else if (y_input2==650 && x_input2>150)
		{
			x_input2-=o_speed;
		}
		else if (x_input2==150 && y_input2> 150)
		{
			y_input2-=o_speed;
		}
		else if ( y_input2==150 && x_input2<650)
		{
			x_input2+=o_speed;
		}
		




		else if(x_input2==550 && y_input2<550)
		{
			y_input2+=o_speed;
		}
		else if (y_input2==550 && x_input2>250)
		{
			x_input2-=o_speed;
		}
		else if (x_input2==250 && y_input2> 250)
		{
			y_input2-=o_speed;
		}
		else if ( y_input2==250 && x_input2<550)
		{
			x_input2+=o_speed;
		}


		else if(x_input2==350 && y_input2>350)
		{
			y_input2-=o_speed;
		}
		else if (y_input2==350 && x_input2<450)
		{
			x_input2+=o_speed;
		}
		else if (x_input2==450 && y_input2< 450)
		{
			y_input2+=o_speed;
		}
		else if ( y_input2==450 && x_input2>350)
		{
			x_input2-=o_speed;
		}
	



		/////////////////////////////////////////////CODE FOR FOLLOW FOR SECOND CAR////////////////////////////////////////////


		if((b>=50 && b<=750) && ( a>=50 && a<=750)) 
	{		
		if((x_input2>=150 || x_input2<=650) && (y_input2>=150 || y_input2<=650))
		{
			if( x_input2 >= 350 && x_input2<= 450 ) 
			{
				if(y_input2==650)
				{
					y_input2+=100;
				}
				if(y_input2==150)
				{
					y_input2-=100;
				}
			}
		}
		if((x_input2>=350 || x_input2<=450) && (y_input2>=350 || y_input2<=450))
		{
			if( x_input2 >= 350 && x_input2<= 450 ) 
			{
				if(y_input2==450)
				{
					y_input2+=100;
				}
				if(y_input2==350)
				{
					y_input2-=100;
				}
			}
		}
	}	





	if((b>=150 && b<=650) && ( a>=150 && a<=650)) 
	{		
		if((x_input2>=50 || x_input2<=750) && (y_input2>=50 || y_input<=750))
		{
			if( x_input >= 350 && x_input<= 450 ) 
			{
				if(y_input2==750)
				{
					y_input2-=100;
				}
				if(y_input2==50)
				{
					y_input2+=100;
				}
			}
		}
		
		 if((x_input>=250 || x_input<=550) && (y_input>=250 || y_input<=550))
		{
			if( x_input2 >= 350 && x_input2<= 450 ) 
			{
				if(y_input2==550)
				{
					y_input2+=100;
				}
				if(y_input2==250)
				{
					y_input2-=100;
				}
			}
		}
	}



	if((a>=250 && a<=550) && (b>=250 && b<=550)) 
	{
		if ((x_input2>=150 || x_input2 <=650) && (y_input2>=150 || y_input2<=650))
		{
			if(x_input2>=350 && x_input2 <= 450)
			{
				if(y_input2==650)
				{
					y_input2-=100;
				}
				if(y_input2==150)
				{
					y_input2+=100;
				}
			}
		}	
		 if ((x_input2>=350 || x_input2 <=450) && (y_input2>=350 || y_input2<=450))
		{
			if(x_input2>=350 && x_input2 <= 450)
			{
				if(y_input2==450)
				{
					y_input2+=100;
				}
				if(y_input2==350)
				{
					y_input2-=100;
				}
			}
		}
	}	
	

	if((a>=350 && a<=450) && ( b>=350 && b<=450)) 
	{	
		if ((x_input2>=250 || x_input2 <=550) && (y_input2>=250 || y_input2<=550))
		{
			if(x_input2>=350 && x_input2 <= 450)
			{
				if(y_input2==550)
				{
					y_input2-=100;
				}
				if(y_input2==250)
				{
					y_input2+=100;
				}
			}
		}
		if ((x_input2>=150 || x_input2 <=650) && (y_input2>=150 || y_input2<=650))
		{
			if(x_input2>=350 && x_input2 <= 450)
			{
				if(y_input2==150)
				{
					y_input2+=100;
				}
				if(y_input2==650)
				{
					y_input2-=100;
				}
			}	
		}
		if ((x_input2>=50 || x_input2 <=750) && (y_input2>=50 || y_input2<=750))
		{
			if(x_input2>=350 && x_input2 <= 450)
			{
				if(y_input2==50)
				{
					y_input2+=100;
				}
				if(y_input2==750)
				{
					y_input2-=100;
				}
			}	
		}
	}
	




		if((b>=50 && b<=750) && ( a>=50 && a<=750)) 
	{		
		if((x_input2>=150 || x_input2<=650) && (y_input2>=150 || y_input2<=650))
		{
			if( x_input2 >= 350 && x_input2<= 450 ) 
			{
				if(y_input2==650)
				{
					y_input2+=100;
				}
				if(y_input2==150)
				{
					y_input2-=100;
				}
			}
		}
		if((x_input2>=350 || x_input2<=450) && (y_input2>=350 || y_input2<=450))
		{
			if( x_input2 >= 350 && x_input2<= 450 ) 
			{
				if(y_input2==450)
				{
					y_input2+=100;
				}
				if(y_input2==350)
				{
					y_input2-=100;
				}
			}
		}
	}	





	if((b>=150 && b<=650) && ( a>=150 && a<=650)) 
	{		
		if((x_input2>=50 || x_input2<=750) && (y_input2>=50 || y_input2<=750))
		{
			if( x_input2 >= 350 && x_input2<= 450 ) 
			{
				if(y_input2==750)
				{
					y_input2-=100;
				}
				if(y_input2==50)
				{
					y_input2+=100;
				}
			}
		}
		
		 if((x_input2>=250 || x_input2<=550) && (y_input2>=250 || y_input2<=550))
		{
			if( x_input2 >= 350 && x_input2<= 450 ) 
			{
				if(y_input2==550)
				{
					y_input2+=100;
				}
				if(y_input2==250)
				{
					y_input2-=100;
				}
			}
		}
	}



	if((a>=250 && a<=550) && (b>=250 && b<=550)) 
	{
		if ((x_input2>=150 || x_input2 <=650) && (y_input2>=150 || y_input2<=650))
		{
			if(x_input2>=350 && x_input2 <= 450)
			{
				if(y_input2==650)
				{
					y_input2-=100;
				}
				if(y_input2==150)
				{
					y_input2+=100;
				}
			}
		}	
		 if ((x_input2>=350 || x_input2 <=450) && (y_input2>=350 || y_input2<=450))
		{
			if(x_input2>=350 && x_input2 <= 450)
			{
				if(y_input2==450)
				{
					y_input2+=100;
				}
				if(y_input2==350)
				{
					y_input2-=100;
				}
			}
		}
	}	
	

	if((a>=350 && a<=450) && ( b>=350 && b<=450)) 
	{	
		if ((x_input2>=250 || x_input2 <=550) && (y_input2>=250 || y_input2<=550))
		{
			if(x_input2>=350 && x_input2 <= 450)
			{
				if(y_input2==550)
				{
					y_input2-=100;
				}
				if(y_input2==250)
				{
					y_input2+=100;
				}
			}
		}
		if ((x_input2>=150 || x_input2 <=650) && (y_input2>=150 || y_input2<=650))
		{
			if(x_input2>=350 && x_input2 <= 450)
			{
				if(y_input2==150)
				{
					y_input2+=100;
				}
				if(y_input2==650)
				{
					y_input2-=100;
				}
			}	
		}
		if ((x_input2>=50 || x_input2 <=750) && (y_input2>=50 || y_input2<=750))
		{
			if(x_input2>=350 && x_input2 <= 450)
			{
				if(y_input2==50)
				{
					y_input2+=100;
				}
				if(y_input2==750)
				{
					y_input2-=100;
				}
			}	
		}
	}
	














	if((b>=50 && b<=750) && ( a>=50 && a<=750)) 
	{		
		if((x_input2>=150 || x_input2<=650) && (y_input2>=150 || y_input2<=650))
		{
			if( y_input2 >= 350 && y_input2<= 450 ) 
			{
				if(x_input2==650)
				{
					x_input2+=100;
				}
				if(x_input2==150)
				{
					x_input2-=100;
				}
			}
		}
		if((x_input2>=350 || x_input2<=450) && (y_input2>=350 || y_input2<=450))
		{
			if( y_input2 >= 350 && y_input2<= 450 ) 
			{
				if(x_input2==450)
				{
					x_input2+=100;
				}
				if(x_input2==350)
				{
					x_input2-=100;
				}
			}
		}
	}	





	if((b>=150 && b<=650) && ( a>=150 && a<=650)) 
	{		
		if((x_input2>=50 || x_input2<=750) && (y_input2>=50 || y_input2<=750))
		{
			if( y_input2 >= 350 && y_input2<= 450 ) 
			{
				if(x_input2==750)
				{
					x_input2-=100;
				}
				if(x_input2==50)
				{
					x_input2+=100;
				}
			}
		}
		
		 if((x_input2>=250 || x_input2<=550) && (y_input2>=250 || y_input2<=550))
		{
			if( y_input2 >= 350 && y_input2<= 450 ) 
			{
				if(x_input2==550)
				{
					x_input2+=100;
				}
				if(x_input2==250)
				{
					x_input2-=100;
				}
			}
		}
	}



	if((a>=250 && a<=550) && (b>=250 && b<=550)) 
	{
		if ((x_input2>=150 || x_input2 <=650) && (y_input2>=150 || y_input2<=650))
		{
			if(y_input2>=350 && y_input2 <= 450)
			{
				if(x_input2==650)
				{
					x_input2-=100;
				}
				if(x_input2==150)
				{
					x_input2+=100;
				}
			}
		}	
		 if ((x_input2>=350 || x_input2 <=450) && (y_input2>=350 || y_input2<=450))
		{
			if(y_input2>=350 && y_input2 <= 450)
			{
				if(x_input2==450)
				{
					x_input2+=100;
				}
				if(x_input2==350)
				{
					x_input2-=100;
				}
			}
		}
	}	
	

	if((a>=350 && a<=450) && ( b>=350 && b<=450)) 
	{	
		if ((x_input2>=250 || x_input2 <=550) && (y_input2>=250 || y_input2<=550))
		{
			if(y_input2>=350 && y_input2 <= 450)
			{
				if(x_input2==550)
				{
					x_input2-=100;
				}
				if(x_input2==250)
				{
					x_input2+=100;
				}
			}
		}
		if ((x_input2>=150 || x_input2 <=650) && (y_input2>=150 || y_input2<=650))
		{
			if(y_input2>=350 && y_input2 <= 450)
			{
				if(x_input2==150)
				{
					x_input2+=100;
				}
				if(x_input2==650)
				{
					x_input2-=100;
				}
			}	
		}
		if ((x_input2>=50 || x_input2 <=750) && (y_input2>=50 || y_input2<=750))
		{
			if(y_input2>=350 && y_input2 <= 450)
			{
				if(x_input2==50)
				{
					x_input2+=100;
				}
				if(x_input2==750)
				{
					x_input2-=100;
				}
			}	
		}
	}
	
	
     MovementCar1(); //Entered code to move the first car in Level 4



	if ((x_input2 <= a +10 &&  x_input2 >= a -10 ) && (b <= y_input2+10 && b >= y_input2-10))
	{
		if(lives==0)
		{
			check1=10;
		}
		else
		{
			lives-=1;
			totalfoodeaten=0;
			a=150; b=50; x_input2=450; y_input2=150;
			for(int i=0; i<1000; i++)
			{
				for(int j=0; j<1000; j++)
				{
					check[i][j]=0;
				}
			}
		}
	}	

	
	
}











































	//Code to check collision 
	if ((x_input <= a +10 &&  x_input >= a -10 ) && (b <= y_input+10 && b >= y_input-10))
	{
		if(lives==0)
		{
			check1=10;
		}
		else
		{
			lives-=1;
			totalfoodeaten=0;
			a=150; b=50; x_input=450; y_input=50;
			for(int i=0; i<1000; i++)
			{
				for(int j=0; j<1000; j++)
				{
					check[i][j]=0;
				}
			}
		}
	}	

      //Code to increment level
	if(totalfoodeaten==64)
	{
		level++;
		a=150; b=50; x_input=450; y_input=50;
			for(int i=0; i<1000; i++)
			{
				for(int j=0; j<1000; j++)
				{
					check[i][j]=0;
				}
			}
		
	}
	
	DrawString( 50, 900, "Score =" + Num2Str(TotalScore), colors[MISTY_ROSE]);
	DrawString( 750, 900, "Lives ="+Num2Str(lives), colors[MISTY_ROSE]);	
	DrawString( 350, 900, "Level="+Num2Str(level), colors[MISTY_ROSE]);
	DrawString( 340, 960, "Press p for pause", colors[RED]);

		glutPostRedisplay();
	glutSwapBuffers(); // do not modify this line.. or draw anything below this line
}
}



/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */

void NonPrintableKeys(int key, int x, int y) {
	if (key
			== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
		// what to do when left key is pressed...
		if (( b >= 350 && b<= 450 ) && (( a == 750) || ( a==650) || (a==550) || (a== 350) || (a==250) || (a==150))) 
		{
			a-=100;
		}
	} else if (key
			== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {
		if (( b >= 350 && b<= 450 ) && (( a == 50) || ( a==650) || (a==550) || (a== 450) || (a==250) || (a==150))) 
		{
			a+=100;
		}
	} else if (key
			== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {
		if (( a>=350 && a<=450) && (( b == 50) || ( b==150) || ( b == 250) || ( b ==450) || (b == 550) || (b== 650)))
		{
			b+=100;
		}
	}

	else if (key
			== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {
		if (( a>=350 && a<=450) && (( b == 750) || ( b==150) || ( b == 250) || ( b ==350) || (b == 550) || (b== 650)))
		{
			b-=100;
		}
	}

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/

	glutPostRedisplay();

}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y) {
	if (key == 52) 
	{
		exit(1); 
	}
	if (key==48)
	{
		check1=0;
	}
	if(key == 49)
	{
		check1=1;
	}
	if(key == 112)
	{
		check1=4;
	}
	if(key==51)
	{
		check1=3;
	}
	if(key==32)
	{
		space_count+=1;
		if((a%10)==5)
		{
			a+=5;
		}
		if((b%10)==5)
		{
			b+=5;
		}
		p_speed=10;
		if(space_count==2)
		{
			p_speed=5;
			space_count=0;
		}	
	}		
	
	glutPostRedisplay();
}


/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m) {

	// implement your functionality here
glutPostRedisplay();
	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(100.0, Timer, 0);
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
void MousePressedAndMoved(int x, int y) {
	cout << x << " " << y << endl;
	glutPostRedisplay();
}
void MouseMoved(int x, int y) {

	glutPostRedisplay();
}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
void MouseClicked(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
			{
		cout << GLUT_DOWN << " " << GLUT_UP << endl;

	} else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{

	}
	glutPostRedisplay();
}
/*
 * our gateway main function
 * */
int main(int argc, char*argv[]) {

	//b = new Board(60, 60); // create a new board object to use in the Display Function ...

	int width = 840, height = 1000; // i have set my window size to be 800 x 600
	//b->InitalizeBoard(width, height);
	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("OOP Centipede"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.

	glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;
}
#endif /* AsteroidS_CPP_ */
