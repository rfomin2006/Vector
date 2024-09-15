#include "Vector.h"

int main() {
	Vector v1(2.5, 3, 7);
	Vector v2(3.5, 7, 3);
	Vector v3;
	std::cout << "Vector1: " << v1 << std::endl;
	std::cout << "Vector2: " << v2 << std::endl;
	std::cout << "Sum of vectors: " << v1 + v2 << std::endl;
	std::cout << "Vector1: " << v1 << std::endl;
	std::cout << "Vector2: " << v2 << std::endl;
	std::cin >> v3;
	std::cout << "Vector3: " << v3 << std::endl;
	return 0;
}