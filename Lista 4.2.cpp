/*Este programa exibe uma Fugura em degradê*/

/*#include <glut.h>
void redesenha() {
	glClearColor(1, 1, 1, 0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(1, 1, 1);
	glPointSize(5);
	glBegin(GL_QUADS);
	glVertex2f(125, 125);
	glColor3f(0, 0, 1);
	glVertex2f(375, 125);
	glColor3f(0, 1, 0.5);
	glVertex2f(375, 375);
	glColor3f(1, 0.5, 0);
	glVertex2f(125, 375);
	glColor3f(1, 1, 0);
	glEnd();
	glFlush();

}

void main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(250, 250);
	glutCreateWindow("Lista 4.2 Da Nath");
	gluOrtho2D(0, 500, 500, 0);
	glutDisplayFunc(redesenha);
	glutMainLoop();

}
*/