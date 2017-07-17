#include "cKlocek.h"

#define NDEBUG
#include <GL/freeglut.h>

#define _USE_MATH_DEFINES
#include <cmath>

Klocek::Klocek(double _x, double _y, double _z, double m_rotation_y)
	:m_position_x(_x), m_position_y(_y), m_position_z(_z), m_rotation_y(m_rotation_y)
{
	
}

Klocek::~Klocek()
{
}


void Klocek::Move(double dx, double dz)
{
	m_position_x += dx;
	m_position_z += dz;
}


void Klocek::Rotate(double drotation_y)
{
	
	m_rotation_y += drotation_y;
	
}

