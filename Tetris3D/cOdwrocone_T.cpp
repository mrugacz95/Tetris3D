#include "cOdwrocone_T.h"

#define NDEBUG
#include <GL/freeglut.h>


Odwrocone_T::Odwrocone_T(double _x, double _y, double _z, double rot_y)
	: Klocek(_x, _y, _z, rot_y)
{
}

Odwrocone_T::~Odwrocone_T()
{
}

void Odwrocone_T::Draw()
{

	glPushMatrix();
	{
		glTranslated(m_position_x, m_position_y, m_position_z);
		glRotatef(m_rotation_y, 0.0, 1.0, 0.0);
		glBegin(GL_QUADS);

		//Front
		glColor3f(0.60, 0.40, 0.12);
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
		glVertex3f(0.0f, 2.0f, 1.0f);
		glVertex3f(1.0f, 2.0f, 1.0f);
		glVertex3f(1.0f, 2.0f, 2.0f);
		glVertex3f(0.0f, 2.0f, 2.0f);

		//Dol
		glVertex3f(0.0f, 0.0f, 0.0f);
		glVertex3f(1.0f, 0.0f, 0.0f);
		glVertex3f(1.0f, 0.0f, 3.0f);
		glVertex3f(0.0f, 0.0f, 3.0f);

		//Gora tyl

		glVertex3f(0.0f, 1.0f, 0.0f);
		glVertex3f(1.0f, 1.0f, 0.0f);
		glVertex3f(1.0f, 1.0f, 1.0f);
		glVertex3f(0.0f, 1.0f, 1.0f);

		//Gora przod

		glVertex3f(0.0f, 1.0f, 2.0f);
		glVertex3f(1.0f, 1.0f, 2.0f);
		glVertex3f(1.0f, 1.0f, 3.0f);
		glVertex3f(0.0f, 1.0f, 3.0f);

		//Obicie przod

		glVertex3f(0.0f, 1.0f, 2.0f);
		glVertex3f(1.0f, 1.0f, 2.0f);
		glVertex3f(1.0f, 2.0f, 2.0f);
		glVertex3f(0.0f, 2.0f, 2.0f);

		///Obicie tyl

		glVertex3f(0.0f, 1.0f, 1.0f);
		glVertex3f(1.0f, 1.0f, 1.0f);
		glVertex3f(1.0f, 2.0f, 1.0f);
		glVertex3f(0.0f, 2.0f, 1.0f);

		//Obicie lewe
		glVertex3f(0.0f, 1.0f, 1.0f);
		glVertex3f(0.0f, 1.0f, 2.0f);
		glVertex3f(0.0f, 2.0f, 2.0f);
		glVertex3f(0.0f, 2.0f, 1.0f);

		//Obicie prawe
		glVertex3f(1.0f, 1.0f, 1.0f);
		glVertex3f(1.0f, 2.0f, 1.0f);
		glVertex3f(1.0f, 2.0f, 2.0f);
		glVertex3f(1.0f, 1.0f, 2.0f);



		glEnd();

	}
	glPopMatrix();
}

