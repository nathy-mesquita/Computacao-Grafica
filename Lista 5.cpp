/*Este programa exibe:
Ao digitar 1 exiba uma função do primeiro grau
Ao digitar 2 exiba uma função do segundo grau
Ao digitar 3 exiba uma função da sua escolha*/

#include <cmath>
#include <glut.h>

int aux = 1;
int aux2 = 0;



void Eixo() {

	glBegin(GL_LINES);
	glColor3f(1, 0, 0);
	//Eixo x
	glVertex2f(-10, 0);
	glVertex2f(10, 0);

	//Eixo y
	glVertex2f(0, -10);
	glVertex2f(0, 10);

	glEnd();
}


void Funcao01() {
	//Função de segundo grau
	float x, y;

	glColor3f(0, 0, 1);
	glBegin(GL_POINTS);
	

	for (x = -10; x <= 10; x += 0.01) {
		y = x;
		glVertex2f(x, y);
		}

	glEnd();
}



void Funcao02() {
	//Função de segundo grau
	float x, y;

	glColor3f(0, 0, 1);
	glBegin(GL_POINTS);
	

	for (x = -10; x <= 10; x += 0.01) {
		y = x*x;
		glVertex2f(x, y);
		}

	glEnd();
}

void Funcao03() {
	//Função de segundo grau
	float x, y;

	glColor3f(0, 0, 1);
	glBegin(GL_POINTS);
	

	for (x = -10; x <= 10; x += 0.01) {
		y = sin(x);
		glVertex2f(x, y);
		}

	glEnd();
}

void redesenha(){

	glClearColor(1.0, 1.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	if (aux == 1)
		Eixo();
	if (aux2 == 1)
		Funcao01();
	if (aux2 == 2)
		Funcao02();
	if (aux2 == 3)
		Funcao03();

	glFlush();
}

void teclado(unsigned char key, int x, int y){

	switch (key) {
	case '1':
		aux2 = 1;
		break;
	case '2':
		aux2 = 2;
		break;
	case '3':
		aux2 = 3;
		break;
	case 'E':
	case 'e':
		aux = aux *(-1);
		break;
	}
	redesenha();
}

void main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(10, 100);
	glutCreateWindow("Nathaly");
	glutKeyboardFunc(teclado);
	//permite a utilização do teclado
	gluOrtho2D(-10, 10, -10, 10);
	glutDisplayFunc(redesenha);
	glutMainLoop();
	}