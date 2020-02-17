#include <stdio.h>
#include <windows.h>
#include <mmsystem.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <iostream>

using namespace std;

void myinit()
{
	glClearColor(1.0,1.0,1.0,1.0);
    glColor3f(1.0,0.0,0.0);
    glPointSize(5.0);
    gluOrtho2D(0.0,800.0,0.0,800.0);
}

/* Handler for window-repaint event. Call back when the window first appears and whenever the window needs to be re-painted. */

void display()
{
    glClearColor(0.0f, 0.5f, 2.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glPointSize(15.0);

/*Draw a Red 1x1 Square centered at origin*/

    glBegin(GL_POINTS);                  // Each set of 4 vertices form a quad

    glColor3f(0.0f, 0.0f, 0.0f);        // black
    glVertex2f(-0.0f, -0.0f);           // x, y

    glColor3f(1.0f, 1.0f, 1.0f);        // white
    glVertex2f(-0.1f, -0.0f);           // x, y

    glColor3f(1.0f, 1.0f, 1.0f);        // white
    glVertex2f(0.1f, 0.0f);             // x, y

    glColor3f(1.0f, 1.0f, 1.0f);        // white
    glVertex2f(-0.0f, -0.1f);           // x, y

    glColor3f(0.0f, 0.0f, 0.0f);        // black
    glVertex2f(0.1f, -0.1f);            // x, y

    glColor3f(0.0f, 0.0f, 0.0f);        // white
    glVertex2f(-0.1f, -0.1f);           // x, y

    glColor3f(0.0f, 0.0f, 0.0f);        // black
    glVertex2f(-0.0f, -0.2f);           // x, y

    glColor3f(1.0f, 1.0f, 1.0f);        // white
    glVertex2f(-0.1f, -0.2f);           // x, y

    glColor3f(1.0f, 1.0f, 1.0f);        // white
    glVertex2f(0.1f, -0.2f);            // x, y

    glEnd();
    glFlush();                          // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */

int main(int argc, char** argv)
{
    glutInit(&argc, argv);                  // Initialize GLUT
    glutCreateWindow("OpenGL Setup Test");  // Create a window with the given title
    glutInitWindowSize(320, 320);           // Set the window's initial width & height
    glutDisplayFunc(display);               // Register display callback handler for window re-paint
    glutMainLoop();                         // Enter the event-processing loop
    return 0;
}
