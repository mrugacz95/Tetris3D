#include "cLiterkaL.h"

#define NDEBUG
#include <GL/freeglut.h>


LiterkaL::LiterkaL(double _x, double _y, double _z, double rot_y)
	: Klocek(_x, _y, _z, rot_y)
{
}

LiterkaL::~LiterkaL()
{
}

void LiterkaL::Draw()
{

	glPushMatrix();
	{
		glTranslated(m_position_x, m_position_y, m_position_z);
		glRotatef(m_rotation_y, 0.0, 1.0, 0.0);
		glBegin(GL_QUADS);

		//Gora
		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(0.0f, 3.0f, 0.0f);
		glVertex3f(1.0f, 3.0f, 0.0f);
		glVertex3f(1.0f, 3.0f, 1.0f);
		glVertex3f(0.0f, 3.0f, 1.0f);

		//D�

		glVertex3f(0.0f, 0.0f, 0.0f);
		glVertex3f(1.0f, 0.0f, 0.0f);
		glVertex3f(1.0f, 0.0f, 2.0f);
		glVertex3f(0.0f, 0.0f, 2.0f);

		//Prawy

		glVertex3f(1.0f, 3.0f, 0.0f);
		glVertex3f(1.0f, 3.0f, 1.0f);
		glVertex3f(1.0f, 0.0f, 1.0f);
		glVertex3f(1.0f, 0.0f, 0.0f);

		///Lewy

		glVertex3f(0.0f, 0.0f, 0.0f);
		glVertex3f(0.0f, 3.0f, 0.0f);
		glVertex3f(0.0f, 3.0f, 1.0f);
		glVertex3f(0.0f, 0.0f, 1.0f);

		//Przod
		glVertex3f(0.0f, 0.0f, 2.0f);
		glVertex3f(1.0f, 0.0f, 2.0f);
		glVertex3f(1.0f, 1.0f, 2.0f);
		glVertex3f(0.0f, 1.0f, 2.0f);

		//Tyl
		glVertex3f(0.0f, 3.0f, 0.0f);
		glVertex3f(1.0f, 3.0f, 0.0f);
		glVertex3f(1.0f, 0.0f, 0.0f);
		glVertex3f(0.0f, 0.0f, 0.0f);

		//////// Kwadracik

		//Gora
		glVertex3f(0.0f, 1.0f, 1.0f);
		glVertex3f(1.0f, 1.0f, 1.0f);
		glVertex3f(1.0f, 1.0f, 2.0f);
		glVertex3f(0.0f, 1.0f, 2.0f);

		//Prawy

		glVertex3f(1.0f, 0.0f, 1.0f);
		glVertex3f(1.0f, 1.0f, 1.0f);
		glVertex3f(1.0f, 1.0f, 2.0f);
		glVertex3f(1.0f, 0.0f, 2.0f);

		///Lewy

		glVertex3f(0.0f, 0.0f, 1.0f);
		glVertex3f(0.0f, 1.0f, 1.0f);
		glVertex3f(0.0f, 1.0f, 2.0f);
		glVertex3f(0.0f, 0.0f, 2.0f);



		glEnd();

	}
	glPopMatrix();
}

