#include "vect2.hpp"

int	main()
{
	vect2	vect_1(1, 3);
	vect2	vect_2(8, 9);
	vect2	vect_3 = vect_1 + vect_2;
	vect2	vect_4 = vect_1 - vect_2;
	vect2	vect_5 = vect_1 * vect_2;

	std::cout << vect_1 << std::endl;
	std::cout << vect_3 << std::endl;

	std::cout << "vect_1 == vect_3: " << (vect_1 == vect_3) << std::endl;
    std::cout << "vect_1 == vect_1: " << (vect_1 == vect_1) << std::endl;
    std::cout << "vect_1 != vect_3: " << (vect_1 != vect_3) << std::endl;
    std::cout << "vect_1 != vect_1: " << (vect_1 != vect_1) << std::endl;
}
