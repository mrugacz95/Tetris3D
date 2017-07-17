#ifndef cScena_h
#define cScena_h


#include <GL/freeglut.h>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <math.h>
#include <cmath>
#include <stdlib.h>
#include "cPlaski.h"
#include "cPionowy.h"
#include "cWksztalcie_T.h"
#include "cLiterkaL.h"
#include "cOdwrocone_T.h"
using namespace std;



class cScena {
public:
		
		cScena(int* argc, char *argv[]) {
		glutInit(argc, argv);
		glutInitWindowSize(900, 700);
		glutInitWindowPosition(40, 40);
		glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH | GLUT_MULTISAMPLE);

		glutCreateWindow("Scena");


		glClearColor(0, 0, 0, 0);         //Zmiana koloru t³a 

		glEnable(GL_DEPTH_TEST);
		glDepthFunc(GL_LESS);

		glEnable(GL_LIGHT0);
		glEnable(GL_NORMALIZE);
		glEnable(GL_COLOR_MATERIAL);

		glutReshapeFunc(resize_wrapper);
		glutDisplayFunc(display_wrapper);
		glutIdleFunc(idle_wrapper);
		glutKeyboardFunc(keyboard_wrapper);
		glutPassiveMotionFunc(mouse_passive_wrapper);
		glutMouseFunc(mouse_button_wrapper);
		
		
		m_klocki.push_back(new Wksztalcie_T(5.0, 4.0, 1.0, 0.0));
		
	};

	~cScena(){
		/*for (int i = 0; i = m_figury.size(); i++){

			delete m_figury[i];   ////////////// Tutaj umieœciæ destruktor wszystkich wywo³anych figur
			}*/

	};
	void start(){
		m_current = this;
		glutMainLoop();
	}

private:
	void Resize(int width, int height) {
		const float ar = (float)width / (float)height;

		m_width = width;
		m_height = height;
	
		glViewport(0, 0, width, height);

		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		glFrustum(-ar, ar, -1.0, 1.0, 2.0, 100.0);
		gluLookAt(0,0 , 10, 0, 0, 0, 0, 1, 0);
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
	}

	void Idle() {
		glutPostRedisplay();
	}

	void onMouseButton(int button, int state, int mouse_x, int mouse_y)
	{
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			
		}
		else if (button == GLUT_LEFT_BUTTON && state == GLUT_UP)
		{
			
		}
	}
	void Keyboard(unsigned char key, int mouse_x, int mouse_y) {
		for (int i = 0; i < m_klocki.size(); i++)
		{
			switch (key)
			{
			case 'w':
			{
				
				m_klocki[i]->Move(0.0, -1.0);
			}break;
			case 'W':
			{

				m_klocki[i]->Move(0.0, -1.0);
			}break;
			case 'a':
			{
				m_klocki[i]->Move(-1.0, 0.0);
			}break;
			case 'A':
			{
				m_klocki[i]->Move(-1.0, 0.0);
			}break;
			case 's':
			{
				m_klocki[i]->Move(0.0, 1.0);
			}break;
			case 'S':
			{
				m_klocki[i]->Move(0.0, 1.0);
			}break;
			case 'd':
			{
				m_klocki[i]->Move(1.0, 0.0);
			}break;
			case 'D':
			{
				m_klocki[i]->Move(1.0, 0.0);
			}break;
			case 'e':
			{
				m_klocki[i]->Rotate(90.0);
			}break;
			case 'E':
			{
				m_klocki[i]->Rotate(90.0);
			}break;
			case 'q':
			{
				m_klocki[i]->Rotate(-90.0);
			}break;
			case 'Q':
			{
				m_klocki[i]->Rotate(-90.0);
			}break;
			}
		}

	}

	void MousePassive(int mouse_x, int mouse_y) {

		CalculateCoordinates(mouse_x, mouse_y, m_x, m_y);
		
	}
	void drawGrid();

	/*void passiveMouseMotion(int mouse_x, int mouse_y)
	{
		przechtwytywanie pozycji obecnej i pozycji przesuniecia myszy i o tyle obracac osie a kamere ostawiamy w spokoju
		w on mouse button

		kolizje klockow[macierz trojwymiarowa]

		double windowWidth = glutGet(GLUT_WINDOW_WIDTH);
		double windowHeight = glutGet(GLUT_WINDOW_HEIGHT);

		double mouse_gl_x = (((double)mouse_x - (windowWidth / 2)) / windowWidth) * ((windowWidth / windowHeight) * 45);
		double mouse_gl_y = -(((double)mouse_y - (windowHeight / 2)) / windowHeight) * ((windowHeight / windowWidth) * 45);

		

	}*/

	void Display() {
		
	
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glLoadIdentity();
		glTranslatef(-5, 0,-10); 
		glRotatef(40, 1, 1, 0); 
		drawGrid();
		glPushMatrix;
		{
			for (int i = 0; i < m_klocki.size(); i++)
			{
				m_klocki[i]->Draw();
			}
		}
		glPopMatrix;
		
		glutSwapBuffers();
	}

	bool CalculateCoordinates(int mouse_x, int mouse_y, double &scene_x, double &scene_y) {
		scene_x = ((double)mouse_x - m_width / 2) / m_width * 5.00 * ((float)m_width / (float)m_height);
		scene_y = -(((double)mouse_y - m_height / 2) / m_height * 5.00);
		return true;
	}


	static cScena *m_current;
	static void resize_wrapper(int width, int height);
	static void idle_wrapper();
	static void display_wrapper();
	static void keyboard_wrapper(unsigned char key, int mouse_x, int mouse_y);
	static void mouse_passive_wrapper(int mouse_x, int mouse_y);
	static void mouse_button_wrapper(int button, int state, int mouse_x, int mouse_y); 
	
	int m_width;
	int m_height;
	double m_x;
	double m_y;
	int czas_aktualny; //czas akutalny
	
	vector<Klocek*> m_klocki;
};

#endif 
