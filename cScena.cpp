#include "cScena.h"



cScena* cScena::m_current = 0;

void cScena::resize_wrapper(int width, int height) {
	m_current->Resize(width, height);
}
void cScena::idle_wrapper() {
	m_current->Idle();
}
void cScena::display_wrapper() {
	m_current->Display();
}
void cScena::keyboard_wrapper(unsigned char key, int mouse_x, int mouse_y) {
	m_current->Keyboard(key, mouse_x, mouse_y);
}
void cScena::mouse_passive_wrapper(int mouse_x, int mouse_y) {
	m_current->MousePassive(mouse_x,mouse_y);
}
void cScena::mouse_button_wrapper(int button, int state, int mouse_x, int mouse_y){

	m_current->onMouseButton(button, state, mouse_x, mouse_y);
}

void cScena::drawGrid(){


	for (int i = 0; i < 18; i++){  //// Siatka pod³oga 

		glPushMatrix();
		if (i < 9) { glTranslatef(0, 0, i); }
		if (i >= 9) { glTranslatef(i - 9, 0, 0); glRotatef(-90, 0, 1, 0); }
		glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glLineWidth(1);
		glVertex3f(0, 0, 0);
		glVertex3f(8, 0, 0);
		glEnd();
		glPopMatrix();
	}
	for (int i = 0; i < 18; i++){  //// Siatka Lewej œciany

		glPushMatrix();
		if (i < 9) { glTranslatef(0, 0, i); }
		if (i >= 9) { glTranslatef(0, i - 9, 0); glRotatef(90, 1, 0, 0); }
		glBegin(GL_LINES);
		glColor3f(0.3, 0.3, 0.3);
		glLineWidth(1);
		glVertex3f(0, 0, 0);
		glVertex3f(0, 8, 0);
		glEnd();
		glPopMatrix();
	}
	for (int i = 0; i < 18; i++){  //// Siatka Tylnej œciany

		glPushMatrix();
		if (i < 9) { glTranslatef(i, 0, 0); }
		if (i >= 9) { glTranslatef(0, i - 9, 0); glRotatef(-90, 0, 0, 1); }
		glBegin(GL_LINES);
		glColor3f(0.3, 0.3, 0.3);
		glLineWidth(1);
		glVertex3f(0, 0, 0);
		glVertex3f(0, 8, 0);
		glEnd();
		glPopMatrix();
	}
	for (int i = 0; i < 18; i++){  //// Siatka Prawej œciany

		glPushMatrix();
		if (i < 9) { glTranslatef(0, 0, i); }
		if (i >= 9) { glTranslatef(0, i - 9, 0); glRotatef(90, 1, 0, 0); }
		glBegin(GL_LINES);
		glColor3f(0.3, 0.3, 0.3);
		glLineWidth(1);
		glVertex3f(8, 0, 0);
		glVertex3f(8, 8, 0);
		glEnd();
		glPopMatrix();
	}
	for (int i = 0; i < 18; i++){  //// Siatka Przedniej œciany

		glPushMatrix();
		if (i < 9) { glTranslatef(i, 0, 0); }
		if (i >= 9) { glTranslatef(0, i - 9, 0); glRotatef(-90, 0, 0, 1); }
		glBegin(GL_LINES);
		glColor3f(0.3, 0.3, 0.3);
		glLineWidth(1);
		glVertex3f(0, 0, 8);
		glVertex3f(0, 8, 8);
		glEnd();
		glPopMatrix();
	}
}
