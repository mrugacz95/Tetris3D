#pragma once

#include "cKlocek.h"

class Pionowy : public Klocek
{
public:
	Pionowy(double _x, double _y, double _z, double rot_y);
	~Pionowy();

	void Draw();


};



