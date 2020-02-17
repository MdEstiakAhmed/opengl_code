#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1.5);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad


    //hpuse
    glColor3f(1.0f, 0.6f, 0.02f); // orange
    glVertex2f(7.0f, 5.0f);    // x, y
    glVertex2f(-7.0f, 5.0f);    // x, y
    glVertex2f(-7.0f, -5.0f);    // x, y
    glVertex2f(7.0f, -5.0f);    // x, y

    //window left up
    glColor3f(0.0f, 0.0f, 0.0f); // orange
    glVertex2f(-3.0f, 4.0f);    // x, y
    glVertex2f(-6.0f, 4.0f);    // x, y
    glVertex2f(-6.0f, 2.0f);    // x, y
    glVertex2f(-3.0f, 2.0f);    // x, y

    //window right up
    glColor3f(0.0f, 0.0f, 0.0f); // black
    glVertex2f(3.0f, 4.0f);    // x, y
    glVertex2f(6.0f, 4.0f);    // x, y
    glVertex2f(6.0f, 2.0f);    // x, y
    glVertex2f(3.0f, 2.0f);    // x, y

    //window left down
    glColor3f(0.0f, 0.0f, 0.0f); // black
    glVertex2f(-3.0f, 0.0f);    // x, y
    glVertex2f(-6.0f, 0.0f);    // x, y
    glVertex2f(-6.0f, -2.0f);    // x, y
    glVertex2f(-3.0f, -2.0f);    // x, y

    //window left down
    glColor3f(0.0f, 0.0f, 0.0f); // black
    glVertex2f(3.0f, 0.0f);    // x, y
    glVertex2f(6.0f, 0.0f);    // x, y
    glVertex2f(6.0f, -2.0f);    // x, y
    glVertex2f(3.0f, -2.0f);    // x, y

    //door
    glColor3f(0.0f, 0.0f, 0.0f); // black
    glVertex2f(1.5f, -1.5f);    // x, y
    glVertex2f(-1.5f, -1.5f);    // x, y
    glVertex2f(-1.5f, -5.0f);    // x, y
    glVertex2f(1.5f, -5.0f);    // x, y


	glEnd();
	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("rainbow"); // Create a window with the given title
	glutInitWindowSize(1000, 1000);   // Set the window's initial width & height
	gluOrtho2D(-10.0f, 10.0f, -10.0f, 10.0f);
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
