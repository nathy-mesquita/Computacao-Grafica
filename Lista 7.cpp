/*Inserção de um polígono (qualquer), muda a cor do polígono.
Ao Iniciar o programa>
[R]=> Define a cor vermelho
[G]=> Define a cor verde
[B]=> Define a cor azul
[C]=> O usuário define a cor padrão RGB
[D]=> Voltar ao estágio inicial
À Determinação do objeto>
Teclado-[P]=> O usuário define o tipo de polígono com as coordenadas X, Y
	   -[H]=> O usuário define o tipo de polígono com as coordenadas X, Y ja existentes
Mouse- [Botão direito]=> Trasforma as coordenadas X, Y do objeto*/

#include <vector> //pilhas
#include <glut.h>
#include <stdio.h> //input e output
//nessa ordem, pois a vector é de c++ e as outras de c

using namespace std;

float DIM = 500;
float size = 10;
float r = 0.7, g = 0.5, b = 0.2;
vector<float> px;
vector<float> py;

//inicialmente null

void objeto() {
	glColor3f(r, g, b);
	glBegin(GL_POLYGON);
	for (int i = 0; i <= px.size() && i <= py.size(); i++) {
		glVertex2f(px[i], py[i]);
	}
	glEnd();
}

void redesenha() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	objeto();
	glFlush();
}

void teclado(unsigned char key, int x, int y) {
	int n;
	float aux_x, aux_y;

	switch (key) {
	case 'R':
	case 'r':
		r = 1;
		g = 0;
		b = 0;
		break;

	case 'G':
	case 'g':
		r = 0;
		g = 1;
		b = 0;
		break;

	case 'B':
	case 'b':
		r = 0;
		g = 0;
		b = 1;
		break;

	case 'c':
	case 'C':
		printf("Insira a cor padrao RGB: ");
		printf("\nR: ");
		scanf_s("%f", &r);
		printf("\nG: ");
		scanf_s("%f", &g);
		printf("\nB: ");
		scanf_s("%f", &b);
		break;

	case 'd':
	case 'D':
		r = 0.7;
		g = 0.5;
		b = 0.2;
		break;

	case 'p':
	case 'P':
		px.clear();
		py.clear();
		printf("Numeros de Vertices: ");
		scanf_s("%d", &n);
		for (int i = 0; i < n; i++) {
			printf("x[%d] = ", i);
			scanf_s("%f", &aux_x);
			printf("y[%d] = ", i);
			scanf_s("%f", &aux_y);
			px.push_back(aux_x); //insere na pilha. para retirar, seria o pop
			py.push_back(aux_y);
		}
		break;

	case 'h':
	case 'H':
		printf("Numeros de Vertices: ");
		scanf_s("%d", &n);
		for (int i = 0; i < n; i++) {
			printf("x[%d] = ", i);
			scanf_s("%f", &aux_x);
			printf("y[%d] = ", i);
			scanf_s("%f", &aux_y);
			px.push_back(aux_x); //insere na pilha. para retirar, seria o pop
			py.push_back(aux_y);
		}
		break;

		redesenha();
	}
}

void mouse(int button, int state, int x, int y) {

	switch (button) {
	case GLUT_RIGHT_BUTTON:
		if (state == GLUT_DOWN) {
			glutPostRedisplay();
			printf("\n x = %d      y = %d", x, y);
			px.push_back(x);
			py.push_back(y);
			printf("\n%f %f", px, py);
		}
		glutPostRedisplay();
		break;
	}
	redesenha();
}

void main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(DIM, DIM);
	glutInitWindowPosition(500, 10);
	glutCreateWindow("Lista 7");
	glutKeyboardFunc(teclado);
	glutMouseFunc(mouse);
	gluOrtho2D(-10, 10, -10, 10);
	glutDisplayFunc(redesenha);
	glutMainLoop();
}