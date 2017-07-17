#pragma once

#include "cKlocek.h"

class Plaski : public Klocek
{
public:
	Plaski(double _x, double _y, double _z, double rot_y);
	~Plaski();

	void Draw();


};



