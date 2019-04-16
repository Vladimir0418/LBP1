#include "pch.h"
#include "Complex.h"
using namespace std;
Complex::Complex()
{
	this->im = 0;
	this->re = 0;
}
Complex::Complex(const double a, const double b)
{
	this->re = a;
	this->im = b;
}
void Complex::setre(const double a)
{
	this->re = a;
}
void Complex::setim(const double b)
{
	this->im = b;
}
double Complex::getmod()
{
	return sqrt(re*re + im * im);
}
double Complex::getim()
{
	return im;
}
double Complex::getre()
{
	return re;
}
void Complex::getnum()
{
	cout << re << " + " << im << "i ";
}
Complex Complex::operator+(const Complex &a)
{
	Complex got;
	got.im = this->im + a.im;
	got.re = this->re + a.re;
	return got;
}
Complex Complex::operator-(const Complex &a)
{
	Complex got;
	got.im = this->im - a.im;
	got.re = this->re - a.re;
	return got;
}
Complex Complex::operator* (const Complex &a)
{
	Complex got;
	got.im = this->im * a.im;
	got.re = this->re * a.re;
	return got;

}
Complex Complex::operator/(const Complex &a)
{
	Complex got;
	got.im = this->im / a.im;
	got.re = this->re / a.re;
	return got;
}