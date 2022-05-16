#pragma once
#ifndef DERIVATIVE_H
#define DERIVATIVE_H

#include "base.h"

class derivative : public base
{
 public:
	derivative();
	derivative(int publicN, int protectedN);
	~derivative() {}

	void sayHello();
	void status();

private:
	
};


#endif

