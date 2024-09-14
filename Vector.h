#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
class Vector
{
public:
	float x, y, z;
	Vector();
	Vector(float x, float y, float z);
	Vector operator+(Vector rvalue);
};
std::ostream& operator<<(std::ostream& stream, const Vector& rvalue);
std::istream& operator>>(std::istream& stream, Vector& rvalue);
#endif