#pragma once

#include "cKlocek.h"

class Wksztalcie_T : public Klocek
{
public:
	Wksztalcie_T(double _x, double _y, double _z, double rot_y);
	~Wksztalcie_T();

	void Draw();


};


