//============================================================================
// Name        : game.cpp
// Author      : Hassan Mustafa
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game of Dodge 'Em...
//============================================================================

#ifndef DODGE_CPP_
#define DODGE_CPP_
#include "util.h"
#include <iostream>
#include<string>
#include<cmath> // for basic math functions such as cos, sin, sqrt
using namespace std;
 
float x11 = 300; 
 float y11 = 230;
 float x111 = 540; 
 float y111 = 230; 
 bool collision=1;
 bool stop = 0, mainMenu = 1, start = 0;

// seed the random numbers generator by current time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */

//index 0 is x, index 1 is y
/*const static int foods = 40;
const static int food_pos[foods][2] = {{250, 70},{250, 140},{250,210},{250,280},{250},{},{},{}};
bool food_eaten[foods] = {false};
*/

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
void GameDisplay()/**/{
	
if(mainMenu == 1)
{
	 DrawString(100, 150, 10, 10, "press 'N' or 'n' for new game");
	 

}
else if(mainMenu == 0 && start == 1)
{
	/*if(stop == true)
	{
		//saare increments zero kardo
	}*/
	
	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.

	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
			0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors

	// calling some functions from util.cpp file to help students


	//Square at 400,20 position
	//DrawSquare( 400 , 20 ,40,colors[RED]); 
	//Square at 250,250 position
	//DrawSquare( 250 , 250 ,20,colors[GREEN]); 
//FOR LINE 1
	
	/*for(int i = 0; i < foods; ++i){
		if(food_eaten[i] == false && ABS(player_x-food_pos[i][0]) <= 20 && player_y == food_pos[i][1])
		{
			food_eaten[i] = true;
			score+=30;
		}	
	}


	for(int i = 0; i < foods; ++i){
		if(food_eaten[i] == false)	
			DrawSquare(food_pos[i][0], food_pos[i][1], 10, colors[YELLOW])	
	} */
	
        DrawSquare( 250 , 70 ,10,colors[YELLOW]);
        DrawSquare( 250 , 140 ,10,colors[YELLOW]);
	DrawSquare( 250 , 210 ,10,colors[YELLOW]);
        DrawSquare( 250 , 280 ,10,colors[YELLOW]);
        DrawSquare( 250 , 350 ,10,colors[YELLOW]);
        DrawSquare( 250 , 480 ,10,colors[YELLOW]);
        DrawSquare( 250 , 550 ,10,colors[YELLOW]);
        DrawSquare( 250 , 620 ,10,colors[YELLOW]);
        DrawSquare( 250 , 690 ,10,colors[YELLOW]);
        DrawSquare( 250 , 760 ,10,colors[YELLOW]);
       
        
        //FOR LINE 2
        DrawSquare( 150 , 70 ,10,colors[YELLOW]);
        DrawSquare( 150 , 140 ,10,colors[YELLOW]);
	DrawSquare( 150 , 210 ,10,colors[YELLOW]);
        DrawSquare( 150 , 280 ,10,colors[YELLOW]);
        DrawSquare( 150 , 350 ,10,colors[YELLOW]);
        DrawSquare( 150 , 480 ,10,colors[YELLOW]);
        DrawSquare( 150 , 550 ,10,colors[YELLOW]);
        DrawSquare( 150 , 620 ,10,colors[YELLOW]);
        DrawSquare( 150 , 690 ,10,colors[YELLOW]);
        DrawSquare( 150 , 760 ,10,colors[YELLOW]); 

       
 
        
        //FOR LINE 3
         DrawSquare( 50 , 70 ,10,colors[YELLOW]);
        DrawSquare( 50 , 140 ,10,colors[YELLOW]);
	DrawSquare( 50 , 210 ,10,colors[YELLOW]);
        DrawSquare( 50 , 280 ,10,colors[YELLOW]);
        DrawSquare( 50 , 350 ,10,colors[YELLOW]);
        DrawSquare( 50 , 480 ,10,colors[YELLOW]);
        DrawSquare( 50 , 550 ,10,colors[YELLOW]);
        DrawSquare( 50 , 620 ,10,colors[YELLOW]);
        DrawSquare( 50 , 690 ,10,colors[YELLOW]);
        DrawSquare( 50 , 760 ,10,colors[YELLOW]);
        //FOR LINE 4
         DrawSquare( 350 , 70 ,10,colors[YELLOW]);
        DrawSquare( 350 , 140 ,10,colors[YELLOW]);
	DrawSquare( 350 , 210 ,10,colors[YELLOW]);
        DrawSquare( 350 , 280 ,10,colors[YELLOW]);
        DrawSquare( 350 , 350 ,10,colors[YELLOW]);
        DrawSquare( 350 , 480 ,10,colors[YELLOW]);
        DrawSquare( 350 , 550 ,10,colors[YELLOW]);
        DrawSquare( 350 , 620 ,10,colors[YELLOW]);
        DrawSquare( 350 , 690 ,10,colors[YELLOW]);
        DrawSquare( 350 , 760 ,10,colors[YELLOW]);
        //FOR LINE 5
         DrawSquare( 460 , 70 ,10,colors[YELLOW]);
        DrawSquare( 460 , 140 ,10,colors[YELLOW]);
	DrawSquare( 460 , 210 ,10,colors[YELLOW]);
        DrawSquare( 460 , 280 ,10,colors[YELLOW]);
        DrawSquare( 460 , 350 ,10,colors[YELLOW]);
        DrawSquare( 460 , 480 ,10,colors[YELLOW]);
        DrawSquare( 460 , 550 ,10,colors[YELLOW]);
        DrawSquare( 460 , 620 ,10,colors[YELLOW]);
        DrawSquare( 460 , 690 ,10,colors[YELLOW]);
        DrawSquare( 460 , 760 ,10,colors[YELLOW]);
        //FOR LINE 6
         DrawSquare( 560 , 70 ,10,colors[YELLOW]);
        DrawSquare( 560 , 140 ,10,colors[YELLOW]);
	DrawSquare( 560 , 210 ,10,colors[YELLOW]);
        DrawSquare( 560 , 280 ,10,colors[YELLOW]);
        DrawSquare( 560 , 350 ,10,colors[YELLOW]);
        DrawSquare( 560 , 480 ,10,colors[YELLOW]);
        DrawSquare( 560 , 550 ,10,colors[YELLOW]);
        DrawSquare( 560 , 620 ,10,colors[YELLOW]);
        DrawSquare( 560 , 690 ,10,colors[YELLOW]);
        DrawSquare( 560 , 760 ,10,colors[YELLOW]);
        //FOR LINE 7
         DrawSquare( 660 , 70 ,10,colors[YELLOW]);
        DrawSquare( 660 , 140 ,10,colors[YELLOW]);
	DrawSquare( 660 , 210 ,10,colors[YELLOW]);
        DrawSquare( 660 , 280 ,10,colors[YELLOW]);
        DrawSquare( 660 , 350 ,10,colors[YELLOW]);
        DrawSquare( 660 , 480 ,10,colors[YELLOW]);
        DrawSquare( 660 , 550 ,10,colors[YELLOW]);
        DrawSquare( 660 , 620 ,10,colors[YELLOW]);
        DrawSquare( 660 , 690 ,10,colors[YELLOW]);
        DrawSquare( 660 , 760 ,10,colors[YELLOW]);
        //FOR LINE 8
         DrawSquare( 760 , 70 ,10,colors[YELLOW]);
        DrawSquare( 760 , 140 ,10,colors[YELLOW]);
	DrawSquare( 760 , 210 ,10,colors[YELLOW]);
        DrawSquare( 760 , 280 ,10,colors[YELLOW]);
        DrawSquare( 760 , 350 ,10,colors[YELLOW]);
        DrawSquare( 760 , 480 ,10,colors[YELLOW]);
        DrawSquare( 760 , 550 ,10,colors[YELLOW]);
        DrawSquare( 760 , 620 ,10,colors[YELLOW]);
        DrawSquare( 760 , 690 ,10,colors[YELLOW]);
        DrawSquare( 760 , 760 ,10,colors[YELLOW]);
 
	//Display Score
	//DrawString( 50, 800, "Score=0", colors[MISTY_ROSE]);
	//Triangle at 300, 450 position
	//DrawTriangle( 300, 450 , 340, 450 , 320 , 490, colors[MISTY_ROSE] ); 
	// Trianlge Vertices v1(300,50) , v2(500,50) , v3(400,250)
	//Circle at 50, 670 position
	//DrawCircle(50,670,10,colors[RED]);
	//Line from 550,50 to 550,480 with width 10
	//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
	//DrawLine( 550 , 50 ,  550 , 480 , 10 , colors[MISTY_ROSE] );	
	Display Score();
	DrawString( 50, 860, "Score=0", colors[MISTY_ROSE]);
        Display Score();
	DrawString( 650, 860, "Lives=3", colors[MISTY_ROSE]);
	
	// Drawing opponent car
	float width = 15; 
	float height = 12;
	float* color = colors[BLUE_VIOLET]; 
	float radius = 5.0;
	DrawRoundRect(x11,y11,width,height,color,radius); // bottom left tyre
	DrawRoundRect(x11+width*3,y11,width,height,color,radius); // bottom right tyre
	DrawRoundRect(x11+width*3,y11+height*4,width,height,color,radius); // top right tyre
	DrawRoundRect(x11,y11+height*4,width,height,color,radius); // top left tyre
	DrawRoundRect(x11, y11+height*2, width, height, color, radius/2); // body left rect
	DrawRoundRect(x11+width, y11+height, width*2, height*3, color, radius/2); // body center rect
	DrawRoundRect(x11+width*3, y11+height*2, width, height, color, radius/2); // body right rect


        // Drawing opponent car2
	
	float width1 = 15; 
	float height1 = 12;
	float* color1 = colors[GOLD]; 
	float radius1 = 5.0;
	DrawRoundRect(x111,y111,width1,height1,color1,radius1); // bottom left tyre
	DrawRoundRect(x111+width1*3,y111,width1,height1,color1,radius1); // bottom right tyre
	DrawRoundRect(x111+width1*3,y111+height1*4,width1,height1,color1,radius1); // top right tyre
	DrawRoundRect(x111,y111+height1*4,width1,height1,color1,radius1); // top left tyre
	DrawRoundRect(x111, y111+height1*2, width1, height1, color1, radius1/2); // body left rect
	DrawRoundRect(x111+width1, y111+height1, width1*2, height1*3, color1, radius1/2); // body center rect
	DrawRoundRect(x111+width1*3, y111+height1*2, width1, height1, color1, radius1/2); // body right rect

	// Drawing Arena
	int gap_turn = 90;
	int sx = 20;
	int sy = 10;
	int swidth = 800/2 - gap_turn/2; // half width
	int sheight = 10;
	float *scolor = colors[BROWN];
	DrawRectangle(sx, sy, swidth, sheight, scolor); // bottom left
	DrawRectangle(sx + swidth + gap_turn, sy, swidth, sheight, scolor); // bottom right
	DrawRectangle(sx+swidth*2+gap_turn, sy+sheight, sheight*2, swidth, scolor); // right down
	DrawRectangle(sx+swidth*2+gap_turn, sy+sheight+swidth+gap_turn, sheight*2, swidth, scolor); // right up
	DrawRectangle(sx + swidth + gap_turn, sy+810, swidth, sheight, scolor); // top left
	DrawRectangle(sx, sy+810, swidth, sheight, scolor); // top right
	DrawRectangle(sx-sheight*2, sy+sheight+swidth+gap_turn, sheight*2, swidth, scolor); // left up
	DrawRectangle(sx-sheight*2, sy+sheight, sheight*2, swidth, scolor); // left down
// Drawing Arena1
	int gap_turn1 = 90;
	int sx1 = 110;
	int sy1 = 110;
	int swidth1 = 600/2 - gap_turn1/2; // half width
	int sheight1 = 10;
	float *scolor1 = colors[BROWN];
	DrawRectangle(sx1, sy1, swidth1, sheight1, scolor1); // bottom left
	DrawRectangle(sx1 + swidth1 + gap_turn1, sy1, swidth1, sheight1, scolor1); // bottom right
	DrawRectangle(sx1+swidth1*2+gap_turn1, sy1+sheight1, sheight1*2, swidth1, scolor1); // right down
	DrawRectangle(sx1+swidth1*2+gap_turn1, sy1+sheight1+swidth1+gap_turn1, sheight1*2, swidth1, scolor1); // right up
	DrawRectangle(sx1 + swidth1 + gap_turn1, sy1+610, swidth1, sheight1, scolor1); // top left
	DrawRectangle(sx1, sy1+610, swidth1, sheight1, scolor1); // top right
	DrawRectangle(sx1-sheight1*2, sy1+sheight1+swidth1+gap_turn1, sheight1*2, swidth1, scolor1); // left up
	DrawRectangle(sx1-sheight1*2, sy1+sheight1, sheight1*2, swidth1, scolor1); // left down

// Drawing Arena2
	int gap_turn2 = 90;
	int sx2 = 210;
	int sy2 = 210;
	int swidth2 = 400/2 - gap_turn2/2; // half width
	int sheight2 = 10;
	float *scolor2 = colors[BROWN];
	DrawRectangle(sx2, sy2, swidth2, sheight2, scolor2); // bottom left
	DrawRectangle(sx2 + swidth2 + gap_turn2, sy2, swidth2, sheight2, scolor2); // bottom right
	DrawRectangle(sx2+swidth2*2+gap_turn2, sy2+sheight2, sheight2*2, swidth2, scolor2); // right down
	DrawRectangle(sx2+swidth2*2+gap_turn2, sy2+sheight2+swidth2+gap_turn2, sheight2*2, swidth2, scolor2); // right up
	DrawRectangle(sx2 + swidth2 + gap_turn2, sy2+410, swidth2, sheight2, scolor2); // top left
	DrawRectangle(sx2, sy2+410, swidth2, sheight2, scolor2); // top right
	DrawRectangle(sx2-sheight2*2, sy2+sheight2+swidth2+gap_turn2, sheight2*2, swidth2, scolor2); // left up
	DrawRectangle(sx2-sheight2*2, sy2+sheight2, sheight2*2, swidth2, scolor2); // left down
// Drawing Arena3
	int gap_turn3 = 90;
	int sx3 = 310;
	int sy3 = 310;
	int swidth3 = 200/2 - gap_turn3/2; // half width
	int sheight3 = 10;
	float *scolor3 = colors[BROWN];
	DrawRectangle(sx3, sy3, swidth3, sheight3, scolor3); // bottom left
	DrawRectangle(sx3 + swidth3 + gap_turn3, sy3, swidth3, sheight3, scolor3); // bottom right
	DrawRectangle(sx3+swidth3*2+gap_turn3, sy3+sheight3, sheight3*2, swidth3, scolor3); // right down
	DrawRectangle(sx3+swidth3*2+gap_turn3, sy3+sheight3+swidth3+gap_turn3, sheight3*2, swidth3, scolor3); // right up
	DrawRectangle(sx3 + swidth3 + gap_turn3, sy3+210, swidth3, sheight3, scolor3); // top left	
	DrawRectangle(sx3, sy3+210, swidth3, sheight3, scolor3); // top right
	DrawRectangle(sx3-sheight3*2, sy3+sheight3+swidth3+gap_turn3, sheight3*2, swidth3, scolor3); // left up
	DrawRectangle(sx3-sheight3*2, sy3+sheight3, sheight3*2, swidth3, scolor3); // left down
// Drawing Arena4
	int gap_turn4 = 0;
	int sx4 = 370;
	int sy4 = 370;
	int swidth4 = 90/2 ; // half width
	int sheight4 = 10;
	float *scolor4 = colors[BROWN];
	DrawRectangle(sx4, sy4, swidth4, sheight4, scolor4); // bottom left
	DrawRectangle(sx4 + swidth4 + gap_turn4, sy4, swidth4, sheight4, scolor4); // bottom right
	DrawRectangle(sx4+swidth4+gap_turn4, sy4+sheight4, sheight4, swidth4, scolor4); // right down
	DrawRectangle(sx4+swidth4+gap_turn4, sy4+sheight4+swidth4+gap_turn4, sheight4, swidth4, scolor4); // right up
	DrawRectangle(sx4 + swidth4 + gap_turn4, sy4+100, swidth4, sheight4, scolor4); // top left
	DrawRectangle(sx4, sy4+100, swidth4, sheight4, scolor4); // top right
	DrawRectangle(sx4-sheight4, sy4+sheight4+swidth4+gap_turn4-0, sheight4, swidth4, scolor4); // left up
	DrawRectangle(sx4-sheight4, sy4+sheight4, sheight4, swidth4, scolor4); // left down

}
	glutSwapBuffers(); // do not modify this line.. or draw anything below this line
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
			== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/)  {
		// what to do when left key is pressed...

	} else if (key
			== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {

	} else if (key
			== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {

	}

	


	else if (key
			== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {

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
		
	if (key == 27/* Escape key ASCII*/) {
		exit(1); // exit the program when escape key is pressed.
	}

	if (key == 'b' || key == 'B')
			{
		//do something if b is pressed
		cout << "b pressed" << endl;

	}
	if (key == 'n' || key == 'N')
	{
		mainMenu = 0;
		start = 1;	
		stop = 0;
	}
	
	if(key == 'p' || key == 'P')
	{
		mainMenu = 0;
		start = 0;
		if (stop == true)
		{	stop = 0;}
		else if (stop == false)
			stop = 1;
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
if (x11>20 && y11==30)
   {x11-=10;
    glutPostRedisplay();
    DrawRoundRect(x11,y11,15,12);}
    else if (x11==20 && y11<750)
      {y11+=10;
       glutPostRedisplay();
       DrawRoundRect(x11,y11,15,12);}
     else if (x11<750 && y11==750)
       {x11+=10;
        glutPostRedisplay();
       DrawRoundRect(x11,y11,15,12);}
       else if (y11>30 && x11==750)
        { y11-=10;
          glutPostRedisplay();
       DrawRoundRect(x11,y11,15,12);}
        
   
 
if (x111<750 && y111==30)
   {x111+=10;
    glutPostRedisplay();
    DrawRoundRect(x111,y111,15,12);}
    else if (x111==750 && y111<750)
      {y111+=10;
       glutPostRedisplay();
       DrawRoundRect(x111,y111,15,12);}
     else if (y111==750 && x111>20 )
       {x111-=10;
        glutPostRedisplay();
       DrawRoundRect(x111,y111,15,12);}
       else if (y111>30 && x111==20)
        { y111-=10;
          glutPostRedisplay();
          DrawRoundRect(x111,y111,15,12);}
         
if((x11>110 && x11<=640)&&(y11==130))
   {x11-=10;
    glutPostRedisplay();
    DrawRoundRect(x11,y11, 15,12);}
    else if ((y11>130 && y11<=640)&&(x11==110))
      {y11+=10;
       glutPostRedisplay();
       DrawRoundRect(x11,y11,15,12);}
     else if ((x11>110 && x11<=640)&&(y11==640))
       {x11+=10;
        glutPostRedisplay();
       DrawRoundRect(x11,y11,15,12);}
       else if ((y11>130 && y11<=640)&&(x11==640))
        { y11-=10;
          glutPostRedisplay();
       DrawRoundRect(x11,y11,15,12);}

if((x11>210 && x11<=540)&&(y11==230))
   {x11-=10;
    glutPostRedisplay();
    DrawRoundRect(x11,y11,15,12);}
    else if ((y11>=230 && y11<540)&&(x11==210))
      {y11+=10;
       glutPostRedisplay();
       DrawRoundRect(x11,y11,15,12);}
     else if ((x11>=210 && x11<540)&&(y11==540))
       {x11+=10;
        glutPostRedisplay();
       DrawRoundRect(x11,y11,15,12);}
       else if ((y11>=230 && y11<=540)&&(x11==540))
        { y11-=10;
          glutPostRedisplay();
       DrawRoundRect(x11,y11,15,12);}
 
if((x111>=110 && x111<640)&&(y111==130))
   {x111+=10;
    glutPostRedisplay();
    DrawRoundRect(x111,y111,15,12);}
    else if ((y111>=130 && y111<640)&&(x111==640))
      {y111+=10;
       glutPostRedisplay();
       DrawRoundRect(x111,y111,15,12);}
     else if ((x111>110 && x111<=640)&&(y111==640))
       {x111-=10;
        glutPostRedisplay();
       DrawRoundRect(x111,y111,15,12);}
       else if ((y111>130 && y111<=640)&&(x111==110))
        { y111-=10;
          glutPostRedisplay();
       DrawRoundRect(x111,y111,15,12);}
if((x111>=210 && x111<540)&&(y111==230))
   {x111+=10;
    glutPostRedisplay();
    DrawRoundRect(x111,y111,15,12);}
    else if ((y111>=230 && y111<540)&&(x111==540))
      {y111+=10;
       glutPostRedisplay();
       DrawRoundRect(x111,y111,15,12);}
     else if ((x111>210 && x111<=540)&&(y111==540))
       {x111-=10;
        glutPostRedisplay();
       DrawRoundRect(x111,y111,15,12);}
       else if ((y111>230 && y111<=540)&&(x111==210))
        { y111-=10;
          glutPostRedisplay();
       DrawRoundRect(x111,y111,15,12);}

if ((x111==x11)&&(y111==y11))
   {x11=310; 
    y11=30;
    x111=460;
    y111=30;
    DrawRoundRect(x111,y111,15,12);
 DrawRoundRect(x11,y11,15,12);} 



	// implement your functionality here

	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(50.0, Timer, 0);
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

	int width = 840, height = 940; // i have set my window size to be 800 x 600
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
