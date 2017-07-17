#pragma once


class Klocek
{
public:
	Klocek(double _x, double _y, double _z, double m_rotation_y);
	~Klocek();

	void Move(double dx, double dz);
	void Rotate(double drotation_y);

	virtual void Draw() = 0;

protected:
	double m_position_x;
	double m_position_y;
	double m_position_z;

	
	double m_rotation_y;
	

};