#include "Vector.h"

Vector::Vector()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

Vector::Vector(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector Vector::operator+(Vector rvalue)
{
	return Vector((this->x + rvalue.x), (this->y + rvalue.y), (this->z + rvalue.z));
}

std::ostream& operator<<(std::ostream& stream, const Vector& rvalue)
{
	stream << "x: " << rvalue.x << " y: " << rvalue.y << " z: " << rvalue.z;
	return stream;
}

std::istream& operator>>(std::istream& stream, Vector& rvalue)
{
	float x, y, z;
	stream >> x >> y >> z;
	rvalue.x = x;
	rvalue.y = y;
	rvalue.z = z;
	return stream;
}
