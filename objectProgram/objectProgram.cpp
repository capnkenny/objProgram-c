// objectProgram.cpp : Displays the "Nintendo Gamecube" Logo on the screen
// Author: Ken Johnson
// Date modified: 30 March 2014
// Original logo designed by Nintendo, all copyrights apply blah blah blah blah.


/* Note to Self: I HATE compiling errors. Therefore, whenever using OpenGL AND STDAFX/CSTDLIB at school/home, 
	make sure that:

	1. "GLUT_BUILDING_LIB" is included in the solution's preprocessor properties.
		Solution Explorer > right click soln. name > Properties > Config. Properties > C++ > Preprocessor > append first line

	2.  a)OPENGL Source and Header files copied into VS2012's include folder -> include\GL\"all the files here"
		b)GLUT32.dll, GLUT32.lib, GLU32.lib, OPENGL32.lib copied into VS2012's lib folder -> lib\GL\"all the files here"

	3. Link .lib files to solution
		Solution Explorer > right click soln. name > Properties > Config. Properties > Linker > Input > append first line

	4. NEVER USE NAMESPACE STD (just use std::whatever() instead).
	
	Then I won't have as much trouble compiling my programs as I did with this one.
*/

#include "stdafx.h"
#include <GL/GLUT.H>
#include <GL/GLU.H>

void display();
void init();

const int WIDTH = 1280;		//Width of window
const int HEIGHT = 720;		//Height of window
//If only the Gamecube displayed games in 720p HD resolutions.....*sigh*


/* Starts the program (gotta have a MAIN idea), and get's OpenGL set up
		(ex. window name, window size, looping function).
	No output, but two parameters (One int, One char).
*/
void main(int argc, char** argv)
{
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(WIDTH, HEIGHT);
	glutInitWindowPosition((WIDTH/4), (HEIGHT/4));

	glutCreateWindow("Nintendo Gamecube Logo");

	glutDisplayFunc(display);
	init();
	glutMainLoop();

	return;
}


/* 
	The call back function to show my logo; draws primitives (mainly) and changes properties of primitives (if we call it here).
	Nothing in, nothing out. Just called again and again to display (anyone's) beautiful objects :)
*/
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glEnable(GL_LINE_STIPPLE);

	glBegin(GL_POLYGON);
		glColor3f(0.796, 0.804, 1.000);
			glVertex2f(-4, 3.0);
		glColor3f(0.980, 0.988, 0.976);
			glVertex2f(0.0, 0.0);
		glColor3f(0.808, 0.820, 0.966);
			glVertex2f(4.0, 3.0);
		glColor3f(0.761, 0.765, 0.988);
			glVertex2f(0.0, 6);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.408, 0.4, 0.686);
			glVertex2f(-4.0, 3.0);
		glColor3f(0.529, 0.529, 0.922);
			glVertex2f(-4, -2.0);
		glColor3f(0.745, 0.745, 0.988);
			glVertex2f(0.0, -5.0);
		glColor3f(0.51, 0.506, 0.804);
			glVertex2f(0.0, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.188, 0.188, 0.282);
			glVertex2f(0.0, 0.0);
		glColor3f(0.212, 0.208, 0.333);
			glVertex2f(4.0, 3.0);
		glColor3f(0.302, 0.298, 0.463);
			glVertex2f(4.0, -2.0);
		glColor3f(0.235, 0.231, 0.353);
			glVertex2f(0.0, -5.0);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.259, 0.259, 0.408);			//Prof. Weitz,
			glVertex2f(6.0, 0.75);				//			If you read this, I would like to ask, is
		glColor3f(0.263, 0.267, 0.388);			//		there a 6-vertex limit when using GL_POLYGON?
			glVertex2f(4.0, -0.75);				//		For some reason, I found that any time I tried
		glColor3f(0.22, 0.208, 0.329);			//		calling more than six verticies, some of the
			glVertex2f(4.0, 3.0);				//		calls after the sixth vertex would be ignored, 
		glColor3f(0.192, 0.176, 0.322);			//		resulting in some very...convoluted shapes.
			glVertex2f(8.0, 6.0);				//		It was mainly for this polygon and the next,
		glColor3f(0.318, 0.314, 0.573);			//		so it was not too much of a big deal, I'm
			glVertex2f(8.0, -7.0);				//		just curious to know if it may just be a 
		glColor3f(0.349, 0.349, 0.545);			//		limitation or just a random bug.
			glVertex2f(6.0, -5.0);				//												-Ken
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.322, 0.322, 0.573);
			glVertex2f(8.0, -7.0);
		glColor3f(0.251, 0.251, 0.392);
			glVertex2f(0.0, -12.5);
		glColor3f(0.247, 0.247, 0.38);
			glVertex2f(0.0, -9.0);
		glColor3f(0.345, 0.345, 0.549);
			glVertex2f(6.0, -5.0);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.753, 0.757, 1.000);
			glVertex2f(0.0, -9.0);
		glColor3f(0.439, 0.435, 0.749);
			glVertex2f(-5.8, -5.0);
		glColor3f(0.341, 0.349, 0.541);
			glVertex2f(-7.8, -7.0);
		glColor3f(0.604, 0.604, 0.957);
			glVertex2f(0.0, -12.5);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.443, 0.443, 0.733);
			glVertex2f(-5.8, -5.0);
		glColor3f(0.333, 0.333, 0.576);
			glVertex2f(-5.8, 4.5);
		glColor3f(0.294, 0.29, 0.525);
			glVertex2f(-7.8, 6.0);
		glColor3f(0.329, 0.337, 0.561);
			glVertex2f(-7.8, -7.0);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.639, 0.635, 1.000);
			glVertex2f(-5.8, 4.5);
		glColor3f(0.569, 0.576, 0.98);
			glVertex2f(0.0, 8.8);
		glColor3f(0.455, 0.443, 1.000);
			glVertex2f(0.0, 11.8);
		glColor3f(0.529, 0.525, 1.000);
			glVertex2f(-7.8, 6.0);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.569, 0.576, 0.98);
			glVertex2f(0.0, 8.8);
		glColor3f(0.659, 0.663, 1.000);
			glVertex2f(4.0, 6.0);
		glColor3f(0.545, 0.537, 1.000);
			glVertex2f(6.0, 7.7);
		glColor3f(0.455, 0.447, 1.000);
			glVertex2f(0.0, 11.8);
	glEnd();

	glLineWidth(3.0);					
	glLineStipple(3.0, 0xFFFF);				
											
	glBegin(GL_LINES);
		glColor3f(0.596, 0.576, 0.969);
			glVertex2f(-7.78, 5.98);
		glColor3f(0.627, 0.643, 0.992);
			glVertex2f(-5.8, 4.48);
		glColor3f(0.996, 0.988, 1.0);
			glVertex2f(-5.8, 4.48);
		glColor3f(0.78, 0.788, 1.0);
			glVertex2f(0.0, 8.78);
		glColor3f(0.769, 0.776, 1.0);
			glVertex2f(0.0, 8.78);
		glColor3f(0.984, 1.0, 0.969);
			glVertex2f(4.0, 6.0);
		glColor3f(0.522, 0.506, 0.878);
			glVertex2f(4.0, 5.98);
		glColor3f(0.286, 0.302, 0.588);
			glVertex2f(6.0, 7.68);
		glColor3f(0.765, 0.745, 0.906);
			glVertex2f(3.99, 3.01);
		glColor3f(0.459, 0.447, 0.624);
			glVertex2f(8.0, 6.01);

		glLineWidth(5.0);
		glColor3f(0.863, 0.859, 1.0);
			glVertex2f(6.01, 0.75);
		glColor3f(0.898, 0.902, 0.984);
			glVertex2f(6.01, -5.0);
		glColor3f(0.965, 0.969, 1.0);
			glVertex2f(6.01, -5.00);
		glColor3f(0.835, 0.855, 0.871);
			glVertex2f(0.0, -9.01);
		glColor3f(0.992, 0.992, 1.0);
			glVertex2f(0.0, -9.01);
		glColor3f(0.984, 0.996, 1.0);
			glVertex2f(-5.80, -5.0);
		glColor3f(0.918, 0.925, 1.0);
			glVertex2f(-5.81, -5.0);
		glColor3f(0.91, 0.922, 0.957);
			glVertex2f(-5.81, 4.49);

		glLineStipple(2.0, 0xFFFF);

	glEnd();

	glFlush();		//Clears out the display area :( no more logo.....but it'll be back.

}


/* 
	Gets the display window ready to handle all the fun OpenGL-ish stuff I send to it.
	Nothing passes go, but nothing leaves either.
*/
void init()
{
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-25.0, 25.0, -20.0, 20.0);

	return;
}


