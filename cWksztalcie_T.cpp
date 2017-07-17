#include "cWksztalcie_T.h"

#define NDEBUG
#include <GL/freeglut.h>


Wksztalcie_T::Wksztalcie_T(double _x, double _y, double _z, double rot_y)
	: Klocek(_x, _y, _z, rot_y)
{
}

Wksztalcie_T::~Wksztalcie_T()
{
}

void Wksztalcie_T::Draw()
{

	glPushMatrix();
	{
		glTranslated(m_position_x, m_position_y, m_position_z);
		glRotatef(m_rotation_y, 0.0, 1.0, 0.0);
		glBegin(GL_QUADS);

		/////////////////////////////GORNA CZESC
		//Gora
		glColor3f(0.0, 0.0, 1.0);
		glVertex3f(0.0f, 2.0f, 0.0f);
		glVertex3f(1.0f, 2.0f, 0.0f);
		glVertex3f(1.0f, 2.0f, 3.0f);
		glVertex3f(0.0f, 2.0f, 3.0f);


		//Prawy

		glVertex3f(1.0f, 1.0f, 0.0f);
		glVertex3f(1.0f, 2.0f, 0.0f);
		glVertex3f(1.0f, 2.0f, 3.0f);
		glVertex3f(1.0f, 1.0f, 3.0f);

		///Lewy

		glVertex3f(0.0f, 1.0f, 0.0f);
		glVertex3f(0.0f, 2.0f, 0.0f);
		glVertex3f(0.0f, 2.0f, 3.0f);
		glVertex3f(0.0f, 1.0f, 3.0f);

		//Przod
		glVertex3f(0.0f, 1.0f, 3.0f);
		glVertex3f(0.0f, 2.0f, 3.0f);
		glVertex3f(1.0f, 2.0f, 3.0f);
		glVertex3f(1.0f, 1.0f, 3.0f);

		//Tyl
		glVertex3f(0.0f, 1.0f, 0.0f);
		glVertex3f(1.0f, 1.0f, 0.0f);
		glVertex3f(1.0f, 2.0f, 0.0f);
		glVertex3f(0.0f, 2.0f, 0.0f);


		//////////////////////DOLNA CZESC
		//Obicie prawe

		glVertex3f(1.0f, 0.0f, 1.0f);
		glVertex3f(1.0f, 1.0f, 1.0f);
		glVertex3f(1.0f, 1.0f, 2.0f);
		glVertex3f(1.0f, 0.0f, 2.0f);

		//obicie lewe

		glVertex3f(0.0f, 0.0f, 1.0f);
		glVertex3f(0.0f, 1.0f, 1.0f);
		glVertex3f(0.0f, 1.0f, 2.0f);
		glVertex3f(0.0f, 0.0f, 2.0f);

		//spod

		glVertex3f(0.0f, 0.0f, 1.0f);
		glVertex3f(1.0f, 0.0f, 1.0f);
		glVertex3f(1.0f, 0.0f, 2.0f);
		glVertex3f(0.0f, 0.0f, 2.0f);

		///Tyl 

		glVertex3f(0.0f, 0.0f, 1.0f);
		glVertex3f(1.0f, 0.0f, 1.0f);
		glVertex3f(1.0f, 1.0f, 1.0f);
		glVertex3f(0.0f, 1.0f, 1.0f);

		//Przod
		glVertex3f(0.0f, 0.0f, 2.0f);
		glVertex3f(1.0f, 0.0f, 2.0f);
		glVertex3f(1.0f, 1.0f, 2.0f);
		glVertex3f(0.0f, 1.0f, 2.0f);

		//plaski przod
		glVertex3f(0.0f, 1.0f, 2.0f);
		glVertex3f(1.0f, 1.0f, 2.0f);
		glVertex3f(1.0f, 1.0f, 3.0f);
		glVertex3f(0.0f, 1.0f, 3.0f);

		//plaski tyl
		glVertex3f(0.0f, 1.0f, 0.0f);
		glVertex3f(1.0f, 1.0f, 0.0f);
		glVertex3f(1.0f, 1.0f, 1.0f);
		glVertex3f(0.0f, 1.0f, 1.0f);
		glEnd();
		
	}
	glPopMatrix();
}

