#include "cPlaski.h"

#define NDEBUG
#include <GL/freeglut.h>


Plaski::Plaski(double _x, double _y, double _z,double rot_y)
	: Klocek(_x, _y,_z,rot_y)
{
}

Plaski::~Plaski()
{
}

void Plaski::Draw()
{
	
		glPushMatrix();
		{
			glTranslated(m_position_x, m_position_y, m_position_z);
			glRotatef(m_rotation_y, 0.0, 1.0, 0.0);
			glBegin(GL_QUADS);

			//Front
			glColor3f(1.0, 1.0, 0.0);
			glVertex3f(0.0f, 0.0f, 3.0f);
			glVertex3f(1.0f, 0.0f, 3.0f);
			glVertex3f(1.0f, 1.0f, 3.0f);
			glVertex3f(0.0f, 1.0f, 3.0f);

			//Right

			glVertex3f(1.0f, 0.0f, 3.0f);
			glVertex3f(1.0f, 0.0f, 0.0f);
			glVertex3f(1.0f, 1.0f, 0.0f);
			glVertex3f(1.0f, 1.0f, 3.0f);

			//Back

			glVertex3f(0.0f, 0.0f, 0.0f);
			glVertex3f(1.0f, 0.0f, 0.0f);
			glVertex3f(1.0f, 1.0f, 0.0f);
			glVertex3f(0.0f, 1.0f, 0.0f);

			///Left

			glVertex3f(0.0f, 0.0f, 0.0f);
			glVertex3f(0.0f, 0.0f, 3.0f);
			glVertex3f(0.0f, 1.0f, 3.0f);
			glVertex3f(0.0f, 1.0f, 0.0f);

			//Gora 
			glVertex3f(0.0f, 1.0f, 3.0f);
			glVertex3f(1.0f, 1.0f, 3.0f);
			glVertex3f(1.0f, 1.0f, 0.0f);
			glVertex3f(0.0f, 1.0f, 0.0f);

			//Dol
			glVertex3f(0.0f, 0.0f, 0.0f);
			glVertex3f(1.0f, 0.0f, 0.0f);
			glVertex3f(1.0f, 0.0f, 3.0f);
			glVertex3f(0.0f, 0.0f, 3.0f);
			glEnd();
			
		}
		glPopMatrix();
}

