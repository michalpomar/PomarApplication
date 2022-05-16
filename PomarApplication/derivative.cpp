#include "derivative.h"


derivative::derivative()
{
	this->publicNumber = 0;
	this->protectedNumber = 0;
}

derivative::derivative(int publicN, int protectedN)
{
	this->publicNumber = publicN;
	this->protectedNumber = protectedN;
	
}

void derivative::sayHello()
{
	std::cout << "Hello I am derivative class object, pomar made me" << std::endl;
}

void derivative::status()
{	
	std::cout << "Public number is " << this->publicNumber << std::endl;
	std::cout << "Protected number is " << this->protectedNumber << std::endl;
	std::cout << "There are " << objects << " number of this class's objects created";
}