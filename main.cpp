#include <stdio.h>
#include <GL/freeglut.h>
#include <GL/gl.h>

#define WIDTH 640
#define HEIGHT 480

void displayFunc() {
	// clear
    glClearColor(0.2, 0.2, 0.2, 0.2);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 1.0, 1.0);  // white
	// glOrtho(x_min, x_max, y_min, y_max, z_min, z_max)
	// so 0, width, height, 0 maps the pixels of the window 1-1 with integer coords
    glOrtho(0.f, WIDTH, HEIGHT, 0.f, 0.f, 1.f);

	glBegin(GL_TRIANGLES);
		glVertex3f(100, 100, 0);
		glVertex3f(200, 200, 0);
		glVertex3f(150, 300, 0);
	glEnd();

    glFlush();
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(WIDTH, HEIGHT);
    glutInitWindowPosition(100, 100);

    glutCreateWindow("OpenGL demo");
    glutDisplayFunc(displayFunc);

    glutMainLoop();

    return 0;
}
