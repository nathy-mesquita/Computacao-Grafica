/*Este programa exibe um desenho na tela (predefinido) */

#include <glut.h>
/*
void redesenha(){
	glClearColor(1.0, 1.0, 1.0, 0.0);
	//Tinta.
	// branco 1 - preto 0 (R,G,B,T) - Transparencia 
	//Indica cor para ser utilizada no fundo da tela.
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //Pincel
	// Pinta os buffers indicados com a cor do glClearColor()
	glColor3f(1.0, 0.5, 0.5);
	// Define o vermelho como cor atual.
	glPointSize(4.0);
	//determine o tamanho do ponto em pixel
	glBegin(GL_QUADS);
	//inicializa uma primitiva - no caso, ponto
	glVertex2f(120.0, 240.0);
	glVertex2f(50.0, 100.0);
	glVertex2f(40.0, 80.0);
	glVertex2f(140.0, 28.0);
	glEnd();
	//indica onde a primitiva termina
	// Plota um ponto na posição (200,200) na tela.
	glFlush();
	// Imprime o conteúdo do buffer na tela.
}
*/
/*
void main(int argc, char **argv){
	glutInit(&argc, argv);
	// Este comando é utilizado para iniciar a biblioteca GLUT.
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA | GLUT_DEPTH);
	// Quando uma janela é criada, seu tipo é determinado pelo Display
	//GLUT_SINGLE: Buffer simples
	//GLUT_RGBA...: Utilizaremos o modo RGBA.
	//GLUT_DEPTH.: Buffer de profundidade 
	//glutInitWindowSize(400, 400);
	// (Comprimento, altura)
	//Indica o tamanho da janela a ser aberta
	glutInitWindowPosition(100, 100);
	//Indica a posição inicial da janela.
	glutCreateWindow("Desenho");
	//Cria uma janela para o OpenGL denominada Ponto
	gluOrtho2D(0, 400, 400, 0);
	//Este comando estabelece a escala da tela.
	//x (0 a 400) y (400 a 0)
	glutDisplayFunc(redesenha);
	// Este comando registra que a função void redesenha()
	//será a rotina a ser chamada sempre que a janela
	//necessita ser redesenhada.
	glutMainLoop();
	// Inicia o gerenciamento da janela e mantém o programa
	//em loop, aguardando por eventos.
}*/
