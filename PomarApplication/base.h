#pragma once
#ifndef BASE_H
#define BASE_H

#include <iostream>

//very abstract class
class base
{
public:
	int publicNumber;
	base(); //konstruktor bezparametrowy
	base(int publicN, int protectedN, int privateN); //konstruktor ze zdefiniowanyi wartosciami atrybutow
	base(const base& obj); //konstruktor kopiuj�cy
	//base(int publicN, int protectedN, int privateN) : publicNumber(publicN), protectedNumber(protectedN), privateNumber(privateN){} //lista inicjalizacyjna ktora nie zadzia�a dop�ki istnieje zwykly konstruktor
	~base() {};

	virtual void sayHello();
	virtual void status();
protected:
	int protectedNumber;
	int getPrivateNumber(); //zdefiniowany w base.cpp
	static int objects;
private:
	int privateNumber; //nie jest dziedziczony


};


#endif