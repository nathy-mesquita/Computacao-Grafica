/*Inicialmente o usuário veja uma tela branca.
Ao digitar em 1 exiba um triângulo azul.
Ao digitar em 2 exiba um quadrilátero azul.
Ao clicar com o botão direito do mouse a cor do objeto para vermelho.
Ao clicar com o botão esquerdo do mouse a cor do objeto para verde.
Ao clicar em R, o programa volte para o estágio inicial, ou seja tela branca e os
objetos também devem voltar para cor azul.*/

/*
#include <stdio.h>
#include <glut.h>

float DIM = 400;
float size = 40;

int aux = 0;
float R = 0, G = 0, B = 1;

void objeto1(){

	glColor3f(R, G, B);

	glBegin(GL_POLYGON);

	glVertex2f(-20, -20);

	glVertex2f(20, -20);

	glVertex2f(0, 20);

	glEnd();

}
*/

/*
void objeto2(){

	glColor3f(R, G, B);

	glBegin(GL_POLYGON);

	glVertex2f(-20, -20);

	glVertex2f(20, -20);

	glVertex2f(20, 20);

	glVertex2f(-20, 20);

	glEnd();

}
*/
/*
void redesenha(){

	glClearColor(1, 1, 1, 1);

	glClear(GL_COLOR_BUFFER_BIT);

	if (aux == 1)

		objeto1();

	if (aux == 2)

		objeto2();

	glFlush();

}
*/
/*
void teclado(unsigned char key, int x, int y){

	switch (key){
	case '1':
		aux = 1;
		break;
	case '2':
		aux = 2;
		break;
	case 'r':
		aux = 0;
		R = 0; G = 0; B = 1;
		break;
	case 'R':
		aux = 0;
		R = 0; G = 0; B = 1;
		break;
	}
	redesenha();
}
*/
/*
void mouse(int button, int state, int x, int y){

	switch (button){
	case GLUT_LEFT_BUTTON:
	R = 0; G = 1; B = 0;
	redesenha();
	break;
	case GLUT_RIGHT_BUTTON:
	R = 1; G = 0; B = 0;
	redesenha();
	break;
	}

}
*/
/*
void main(int argc, char **argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(DIM, DIM);
	glutInitWindowPosition(200, 200);
	glutCreateWindow("Clique Mouse");
	gluOrtho2D(-size, size, -size, size);
	glutDisplayFunc(redesenha);
	glutMouseFunc(mouse);
	glutKeyboardFunc(teclado);
	glutMainLoop();
}*/