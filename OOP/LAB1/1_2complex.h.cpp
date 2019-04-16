#pragma once

#include "pch.h"

#include <iostream>



using namespace std;



#ifndef COMPLEX_H_

#define COMPLEX_H_

class Complex

{

private:

	double re;

	double im;

public:

	Complex();

	Complex(const double, const double);

	void setre(const double);

	void setim(const double);

	double getre();

	double getim();

	void getnum();

	double getmod();

	Complex operator+ (const Complex&);

	Complex operator- (const Complex&);

	Complex operator* (const Complex&);

	Complex operator/ (const Complex&);

};

#endif COMPLEX_H_