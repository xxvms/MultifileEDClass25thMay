// MultifileEDClass25thMay.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "exp.h"


int main()
{
	Part p1;
	p1.setData(4);

	std::cout << p1.getData() << std::endl;

	Arith ar1;

	std::cout << ar1.Square(3) << std::endl; 

	system("pause");
    return 0;
}

