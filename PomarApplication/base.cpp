#include "base.h"

int base::objects = 0;
//konstruktor bezparametrowy
base::base() 
{
	this->publicNumber = 0;
	this->protectedNumber = 0;
	this->privateNumber = 0;
	objects++;
} 
//konstruktor ze zdefiniowanyi wartosciami atrybutow
base::base(int publicN, int protectedN, int privateN)
{
	publicNumber = publicN;
	protectedNumber = protectedN;
	privateNumber = privateN;
	objects++;
}

//konstruktor kopiuj¹cy, wyowlanie np base a(*b)
base::base(const base& obj)
{
	this->publicNumber = obj.publicNumber;
	this->protectedNumber = obj.protectedNumber;
	this->privateNumber = obj.privateNumber;
}


void base::sayHello()
{
	std::cout << "Hello, I am base class object, pomar made me" << std::endl;
}


int base::getPrivateNumber()
{
	return this->privateNumber;
}

void base::status()
{
	std::cout << "Public number is " << this->publicNumber << std::endl;
	std::cout << "Protected number is " << this->protectedNumber << std::endl;
	std::cout << "Private number is " << this->privateNumber << std::endl;
	std::cout << "There are " << objects << " number of objects based on 'base' class created in the programme";
}