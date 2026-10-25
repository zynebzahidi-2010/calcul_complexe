#include "complex.h"
#include<iostream>
#include<math.h>
using namespace std;

Complex::Complex(double re, double img)
{
	this->re = re;
	this->img = img;
}

Complex::Complex(const Complex& original)
{
	this->re = original.re;
	this->img = original.img;

}

Complex Complex::operator+(Complex z) const
{
	Complex* res = new Complex(0, 0);
	res->re = this->re + z.re;
	res->img = this->img + z.img;

	return *res;
}

Complex Complex::operator+(double a) const
{
	Complex* res = new Complex(0, 0);
	res->re = this->re + a;
	res->img = this->img;

	return *res;
}

Complex Complex::operator-( Complex z)const
{
	Complex *res = new Complex(0,0);
	res->re = this->re - z.re;
	res->img = this->img - z.img;

	return *res;
}

Complex Complex::operator-(double a)const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re - a;
	res->img = this->img ;

	return *res;
}

Complex Complex::operator*(const Complex z)const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re =( this->re * z.re) - (this->img * z.img);
	res->img = this->re * z.img - z.re * this->img;
	return *res;
}

Complex Complex::operator*(double a)const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re * a  ;
	res->img = a * this->img;
	return *res;
}

Complex Complex::operator/(const Complex z) const
{
	Complex* res = new Complex(0.0, 0.0);

	res->re = ((this->re * z.re) + (this->img * z.img)) / (pow(z.re,2) +pow(z.img,2)) ;
	res->img =((this->img * z.re) - (this->re * z.img)) / (pow(z.re, 2)  + pow(z.img, 2));

	return *res;
}

Complex Complex::operator/(double a) const
{
	Complex* res = new Complex(0, 0);
	res->re = this->re / a;
	res->img = this->img / a;
	return *res;
}

bool Complex::operator==(const Complex z) const
{
	if (this->re==z.re&& this->img == z.img) {
		return true;
	}
	else {
		return false;
	}
	
	}

bool Complex::operator==(double a) const
{
	if (this->re == a) {
		return true;
	}
	else {
		return false;
	}
}

bool Complex::operator<(const Complex z) const
{
	if ((this->re < z.re || this->re <= z.re) && (this->img < z.img|| this->img <= z.img)) {
		return true;
	}
	else {
		return false;
	}
}

bool Complex::operator<(double a) const
{
	if (this->re < a) {
		return true;
	}
	else {
		return false;
	}
}
/*
bool Complex::operator>(const Complex z) const
{
	if (this->re > z.re && this->img > z.img) {
		return true;
	}
}

bool Complex::operator>(double a) const
{
	if (this->re > a) {
		return true;
	}
}
	
	*/
/*void Complex::comparaison(Complex c1, Complex c2)
{
	if (c1.re == c2.re && c1.img == c2.img) {
		cout << "les deux nombres sont egaux" << endl;
	}
	else
		cout << "les deux nombres ne sont pas egaux" << endl;
}*/


void Complex::afficher() const
{
	if (this->img > 0) {
		cout << this->re << "+i" << this->img;
	}
	else if(this->img < 0) {
		cout << this->re << "-i" << (-1) * this->img;
	}
	else if(this->img == 0) {
		cout << this->re;
	}

}

Complex::~Complex()
{
}
